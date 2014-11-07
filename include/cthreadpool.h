#ifndef C_THREAD_POOL_H_
#define C_THREAD_POOL_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

/**
 *    Reference:
 *        https://github.com/mbrossard/threadpool
 */

/**
 *    Simple thread pool
 *
 *    @verison 0.1.1
 *    @date    2014/11/07
 *    @author  Jian <jianfan.tw@gmail.com>
 */

typedef struct c_thread_pool_t CThreadPool;

CThreadPool * cthreadpool_create(unsigned int threads);

void cthreadpool_destroy(CThreadPool *pool);

bool cthreadpool_add(CThreadPool *pool,
                     void (*function)(void *),
                     void *data);

#ifdef __cplusplus
}
#endif

#endif  /*  C_THREAD_POOL_H_ */
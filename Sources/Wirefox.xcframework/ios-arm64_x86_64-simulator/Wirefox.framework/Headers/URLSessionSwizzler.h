#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^URLSessionTaskResumeBlock)(NSURLSessionTask *task);
typedef void (^URLSessionTaskDidReceiveDataBlock)(NSURLSessionTask *task, NSData *data);
typedef void (^URLSessionDidCompleteBlock)(NSURLSessionTask *task, NSError * _Nullable error);

@protocol URLSessionSwizzling <NSObject>

- (void)swizzleURLSessionTaskResumeWithBlock:(URLSessionTaskResumeBlock)block;
- (void)swizzleDidReceiveDataWithBlock:(URLSessionTaskDidReceiveDataBlock)block;
- (void)swizzleDidCompleteWithErrorWithBlock:(URLSessionDidCompleteBlock)block;

@end

@interface URLSessionSwizzler: NSObject <URLSessionSwizzling>

@property (nonatomic, strong) NSURLSession *session;

- (instancetype)init;

- (instancetype)initWithSession:(NSURLSession *)session;

- (void)swizzleURLSessionTaskResumeWithBlock:(URLSessionTaskResumeBlock)block;

- (void)swizzleDidReceiveDataWithBlock:(URLSessionTaskDidReceiveDataBlock)block;

- (void)swizzleDidCompleteWithErrorWithBlock:(URLSessionDidCompleteBlock)block;

@end

NS_ASSUME_NONNULL_END

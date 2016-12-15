// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "IMBaseDefine.pb.h"
// @@protoc_insertion_point(imports)

@class BlogInfo;
@class BlogInfoBuilder;
@class ContactSessionInfo;
@class ContactSessionInfoBuilder;
@class DepartInfo;
@class DepartInfoBuilder;
@class GroupInfo;
@class GroupInfoBuilder;
@class GroupVersionInfo;
@class GroupVersionInfoBuilder;
@class IMBlogAddCommentReq;
@class IMBlogAddCommentReqBuilder;
@class IMBlogAddCommentRsp;
@class IMBlogAddCommentRspBuilder;
@class IMBlogGetCommentReq;
@class IMBlogGetCommentReqBuilder;
@class IMBlogGetCommentRsp;
@class IMBlogGetCommentRspBuilder;
@class IMBlogGetListReq;
@class IMBlogGetListReqBuilder;
@class IMBlogGetListRsp;
@class IMBlogGetListRspBuilder;
@class IMBlogSend;
@class IMBlogSendAck;
@class IMBlogSendAckBuilder;
@class IMBlogSendBuilder;
@class IpAddr;
@class IpAddrBuilder;
@class MsgInfo;
@class MsgInfoBuilder;
@class OfflineFileInfo;
@class OfflineFileInfoBuilder;
@class PushResult;
@class PushResultBuilder;
@class PushShieldStatus;
@class PushShieldStatusBuilder;
@class ServerUserStat;
@class ServerUserStatBuilder;
@class ShieldStatus;
@class ShieldStatusBuilder;
@class UnreadInfo;
@class UnreadInfoBuilder;
@class UserInfo;
@class UserInfoBuilder;
@class UserStat;
@class UserStatBuilder;
@class UserTokenInfo;
@class UserTokenInfoBuilder;



@interface ImblogRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define IMBlogSend_user_id @"userId"
#define IMBlogSend_blog_data @"blogData"
#define IMBlogSend_attach_data @"attachData"
@interface IMBlogSend : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasBlogData_:1;
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  NSData* blogData;
  NSData* attachData;
  UInt32 userId;
}
- (BOOL) hasUserId;
- (BOOL) hasBlogData;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSData* blogData;
@property (readonly, strong) NSData* attachData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMBlogSendBuilder*) builder;
+ (IMBlogSendBuilder*) builder;
+ (IMBlogSendBuilder*) builderWithPrototype:(IMBlogSend*) prototype;
- (IMBlogSendBuilder*) toBuilder;

+ (IMBlogSend*) parseFromData:(NSData*) data;
+ (IMBlogSend*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogSend*) parseFromInputStream:(NSInputStream*) input;
+ (IMBlogSend*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogSend*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMBlogSend*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMBlogSendBuilder : PBGeneratedMessageBuilder {
@private
  IMBlogSend* resultImblogSend;
}

- (IMBlogSend*) defaultInstance;

- (IMBlogSendBuilder*) clear;
- (IMBlogSendBuilder*) clone;

- (IMBlogSend*) build;
- (IMBlogSend*) buildPartial;

- (IMBlogSendBuilder*) mergeFrom:(IMBlogSend*) other;
- (IMBlogSendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMBlogSendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMBlogSendBuilder*) setUserId:(UInt32) value;
- (IMBlogSendBuilder*) clearUserId;

- (BOOL) hasBlogData;
- (NSData*) blogData;
- (IMBlogSendBuilder*) setBlogData:(NSData*) value;
- (IMBlogSendBuilder*) clearBlogData;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMBlogSendBuilder*) setAttachData:(NSData*) value;
- (IMBlogSendBuilder*) clearAttachData;
@end

#define IMBlogSendAck_user_id @"userId"
#define IMBlogSendAck_blog_id @"blogId"
#define IMBlogSendAck_update_time @"updateTime"
#define IMBlogSendAck_attach_data @"attachData"
@interface IMBlogSendAck : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasBlogId_:1;
  BOOL hasUpdateTime_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 blogId;
  UInt32 updateTime;
}
- (BOOL) hasUserId;
- (BOOL) hasBlogId;
- (BOOL) hasUpdateTime;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 blogId;
@property (readonly) UInt32 updateTime;
@property (readonly, strong) NSData* attachData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMBlogSendAckBuilder*) builder;
+ (IMBlogSendAckBuilder*) builder;
+ (IMBlogSendAckBuilder*) builderWithPrototype:(IMBlogSendAck*) prototype;
- (IMBlogSendAckBuilder*) toBuilder;

+ (IMBlogSendAck*) parseFromData:(NSData*) data;
+ (IMBlogSendAck*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogSendAck*) parseFromInputStream:(NSInputStream*) input;
+ (IMBlogSendAck*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogSendAck*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMBlogSendAck*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMBlogSendAckBuilder : PBGeneratedMessageBuilder {
@private
  IMBlogSendAck* resultImblogSendAck;
}

- (IMBlogSendAck*) defaultInstance;

- (IMBlogSendAckBuilder*) clear;
- (IMBlogSendAckBuilder*) clone;

- (IMBlogSendAck*) build;
- (IMBlogSendAck*) buildPartial;

- (IMBlogSendAckBuilder*) mergeFrom:(IMBlogSendAck*) other;
- (IMBlogSendAckBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMBlogSendAckBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMBlogSendAckBuilder*) setUserId:(UInt32) value;
- (IMBlogSendAckBuilder*) clearUserId;

- (BOOL) hasBlogId;
- (UInt32) blogId;
- (IMBlogSendAckBuilder*) setBlogId:(UInt32) value;
- (IMBlogSendAckBuilder*) clearBlogId;

- (BOOL) hasUpdateTime;
- (UInt32) updateTime;
- (IMBlogSendAckBuilder*) setUpdateTime:(UInt32) value;
- (IMBlogSendAckBuilder*) clearUpdateTime;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMBlogSendAckBuilder*) setAttachData:(NSData*) value;
- (IMBlogSendAckBuilder*) clearAttachData;
@end

#define IMBlogGetListReq_user_id @"userId"
#define IMBlogGetListReq_update_time @"updateTime"
#define IMBlogGetListReq_blog_type @"blogType"
#define IMBlogGetListReq_page @"page"
#define IMBlogGetListReq_page_size @"pageSize"
#define IMBlogGetListReq_attach_data @"attachData"
@interface IMBlogGetListReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasUpdateTime_:1;
  BOOL hasPage_:1;
  BOOL hasPageSize_:1;
  BOOL hasBlogType_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 updateTime;
  UInt32 page;
  UInt32 pageSize;
  BlogType blogType;
}
- (BOOL) hasUserId;
- (BOOL) hasUpdateTime;
- (BOOL) hasBlogType;
- (BOOL) hasPage;
- (BOOL) hasPageSize;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 updateTime;
@property (readonly) BlogType blogType;
@property (readonly) UInt32 page;
@property (readonly) UInt32 pageSize;
@property (readonly, strong) NSData* attachData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMBlogGetListReqBuilder*) builder;
+ (IMBlogGetListReqBuilder*) builder;
+ (IMBlogGetListReqBuilder*) builderWithPrototype:(IMBlogGetListReq*) prototype;
- (IMBlogGetListReqBuilder*) toBuilder;

+ (IMBlogGetListReq*) parseFromData:(NSData*) data;
+ (IMBlogGetListReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogGetListReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMBlogGetListReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogGetListReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMBlogGetListReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMBlogGetListReqBuilder : PBGeneratedMessageBuilder {
@private
  IMBlogGetListReq* resultImblogGetListReq;
}

- (IMBlogGetListReq*) defaultInstance;

- (IMBlogGetListReqBuilder*) clear;
- (IMBlogGetListReqBuilder*) clone;

- (IMBlogGetListReq*) build;
- (IMBlogGetListReq*) buildPartial;

- (IMBlogGetListReqBuilder*) mergeFrom:(IMBlogGetListReq*) other;
- (IMBlogGetListReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMBlogGetListReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMBlogGetListReqBuilder*) setUserId:(UInt32) value;
- (IMBlogGetListReqBuilder*) clearUserId;

- (BOOL) hasUpdateTime;
- (UInt32) updateTime;
- (IMBlogGetListReqBuilder*) setUpdateTime:(UInt32) value;
- (IMBlogGetListReqBuilder*) clearUpdateTime;

- (BOOL) hasBlogType;
- (BlogType) blogType;
- (IMBlogGetListReqBuilder*) setBlogType:(BlogType) value;
- (IMBlogGetListReqBuilder*) clearBlogType;

- (BOOL) hasPage;
- (UInt32) page;
- (IMBlogGetListReqBuilder*) setPage:(UInt32) value;
- (IMBlogGetListReqBuilder*) clearPage;

- (BOOL) hasPageSize;
- (UInt32) pageSize;
- (IMBlogGetListReqBuilder*) setPageSize:(UInt32) value;
- (IMBlogGetListReqBuilder*) clearPageSize;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMBlogGetListReqBuilder*) setAttachData:(NSData*) value;
- (IMBlogGetListReqBuilder*) clearAttachData;
@end

#define IMBlogGetListRsp_user_id @"userId"
#define IMBlogGetListRsp_blog_type @"blogType"
#define IMBlogGetListRsp_page @"page"
#define IMBlogGetListRsp_page_size @"pageSize"
#define IMBlogGetListRsp_blog_list @"blogList"
#define IMBlogGetListRsp_attach_data @"attachData"
@interface IMBlogGetListRsp : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasPage_:1;
  BOOL hasPageSize_:1;
  BOOL hasBlogType_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 page;
  UInt32 pageSize;
  BlogType blogType;
  NSMutableArray * blogListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasBlogType;
- (BOOL) hasPage;
- (BOOL) hasPageSize;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) BlogType blogType;
@property (readonly) UInt32 page;
@property (readonly) UInt32 pageSize;
@property (readonly, strong) NSArray<BlogInfo*> * blogList;
@property (readonly, strong) NSData* attachData;
- (BlogInfo*)blogListAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMBlogGetListRspBuilder*) builder;
+ (IMBlogGetListRspBuilder*) builder;
+ (IMBlogGetListRspBuilder*) builderWithPrototype:(IMBlogGetListRsp*) prototype;
- (IMBlogGetListRspBuilder*) toBuilder;

+ (IMBlogGetListRsp*) parseFromData:(NSData*) data;
+ (IMBlogGetListRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogGetListRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMBlogGetListRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogGetListRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMBlogGetListRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMBlogGetListRspBuilder : PBGeneratedMessageBuilder {
@private
  IMBlogGetListRsp* resultImblogGetListRsp;
}

- (IMBlogGetListRsp*) defaultInstance;

- (IMBlogGetListRspBuilder*) clear;
- (IMBlogGetListRspBuilder*) clone;

- (IMBlogGetListRsp*) build;
- (IMBlogGetListRsp*) buildPartial;

- (IMBlogGetListRspBuilder*) mergeFrom:(IMBlogGetListRsp*) other;
- (IMBlogGetListRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMBlogGetListRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMBlogGetListRspBuilder*) setUserId:(UInt32) value;
- (IMBlogGetListRspBuilder*) clearUserId;

- (BOOL) hasBlogType;
- (BlogType) blogType;
- (IMBlogGetListRspBuilder*) setBlogType:(BlogType) value;
- (IMBlogGetListRspBuilder*) clearBlogType;

- (BOOL) hasPage;
- (UInt32) page;
- (IMBlogGetListRspBuilder*) setPage:(UInt32) value;
- (IMBlogGetListRspBuilder*) clearPage;

- (BOOL) hasPageSize;
- (UInt32) pageSize;
- (IMBlogGetListRspBuilder*) setPageSize:(UInt32) value;
- (IMBlogGetListRspBuilder*) clearPageSize;

- (NSMutableArray<BlogInfo*> *)blogList;
- (BlogInfo*)blogListAtIndex:(NSUInteger)index;
- (IMBlogGetListRspBuilder *)addBlogList:(BlogInfo*)value;
- (IMBlogGetListRspBuilder *)setBlogListArray:(NSArray<BlogInfo*> *)array;
- (IMBlogGetListRspBuilder *)clearBlogList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMBlogGetListRspBuilder*) setAttachData:(NSData*) value;
- (IMBlogGetListRspBuilder*) clearAttachData;
@end

#define IMBlogAddCommentReq_user_id @"userId"
#define IMBlogAddCommentReq_blog_id @"blogId"
#define IMBlogAddCommentReq_blog_data @"blogData"
#define IMBlogAddCommentReq_attach_data @"attachData"
@interface IMBlogAddCommentReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasBlogData_:1;
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasBlogId_:1;
  NSData* blogData;
  NSData* attachData;
  UInt32 userId;
  UInt32 blogId;
}
- (BOOL) hasUserId;
- (BOOL) hasBlogId;
- (BOOL) hasBlogData;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 blogId;
@property (readonly, strong) NSData* blogData;
@property (readonly, strong) NSData* attachData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMBlogAddCommentReqBuilder*) builder;
+ (IMBlogAddCommentReqBuilder*) builder;
+ (IMBlogAddCommentReqBuilder*) builderWithPrototype:(IMBlogAddCommentReq*) prototype;
- (IMBlogAddCommentReqBuilder*) toBuilder;

+ (IMBlogAddCommentReq*) parseFromData:(NSData*) data;
+ (IMBlogAddCommentReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogAddCommentReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMBlogAddCommentReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogAddCommentReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMBlogAddCommentReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMBlogAddCommentReqBuilder : PBGeneratedMessageBuilder {
@private
  IMBlogAddCommentReq* resultImblogAddCommentReq;
}

- (IMBlogAddCommentReq*) defaultInstance;

- (IMBlogAddCommentReqBuilder*) clear;
- (IMBlogAddCommentReqBuilder*) clone;

- (IMBlogAddCommentReq*) build;
- (IMBlogAddCommentReq*) buildPartial;

- (IMBlogAddCommentReqBuilder*) mergeFrom:(IMBlogAddCommentReq*) other;
- (IMBlogAddCommentReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMBlogAddCommentReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMBlogAddCommentReqBuilder*) setUserId:(UInt32) value;
- (IMBlogAddCommentReqBuilder*) clearUserId;

- (BOOL) hasBlogId;
- (UInt32) blogId;
- (IMBlogAddCommentReqBuilder*) setBlogId:(UInt32) value;
- (IMBlogAddCommentReqBuilder*) clearBlogId;

- (BOOL) hasBlogData;
- (NSData*) blogData;
- (IMBlogAddCommentReqBuilder*) setBlogData:(NSData*) value;
- (IMBlogAddCommentReqBuilder*) clearBlogData;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMBlogAddCommentReqBuilder*) setAttachData:(NSData*) value;
- (IMBlogAddCommentReqBuilder*) clearAttachData;
@end

#define IMBlogAddCommentRsp_user_id @"userId"
#define IMBlogAddCommentRsp_comment_id @"commentId"
#define IMBlogAddCommentRsp_update_time @"updateTime"
#define IMBlogAddCommentRsp_result_code @"resultCode"
#define IMBlogAddCommentRsp_attach_data @"attachData"
@interface IMBlogAddCommentRsp : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasCommentId_:1;
  BOOL hasUpdateTime_:1;
  BOOL hasResultCode_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 commentId;
  UInt32 updateTime;
  UInt32 resultCode;
}
- (BOOL) hasUserId;
- (BOOL) hasCommentId;
- (BOOL) hasUpdateTime;
- (BOOL) hasResultCode;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 commentId;
@property (readonly) UInt32 updateTime;
@property (readonly) UInt32 resultCode;
@property (readonly, strong) NSData* attachData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMBlogAddCommentRspBuilder*) builder;
+ (IMBlogAddCommentRspBuilder*) builder;
+ (IMBlogAddCommentRspBuilder*) builderWithPrototype:(IMBlogAddCommentRsp*) prototype;
- (IMBlogAddCommentRspBuilder*) toBuilder;

+ (IMBlogAddCommentRsp*) parseFromData:(NSData*) data;
+ (IMBlogAddCommentRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogAddCommentRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMBlogAddCommentRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogAddCommentRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMBlogAddCommentRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMBlogAddCommentRspBuilder : PBGeneratedMessageBuilder {
@private
  IMBlogAddCommentRsp* resultImblogAddCommentRsp;
}

- (IMBlogAddCommentRsp*) defaultInstance;

- (IMBlogAddCommentRspBuilder*) clear;
- (IMBlogAddCommentRspBuilder*) clone;

- (IMBlogAddCommentRsp*) build;
- (IMBlogAddCommentRsp*) buildPartial;

- (IMBlogAddCommentRspBuilder*) mergeFrom:(IMBlogAddCommentRsp*) other;
- (IMBlogAddCommentRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMBlogAddCommentRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMBlogAddCommentRspBuilder*) setUserId:(UInt32) value;
- (IMBlogAddCommentRspBuilder*) clearUserId;

- (BOOL) hasCommentId;
- (UInt32) commentId;
- (IMBlogAddCommentRspBuilder*) setCommentId:(UInt32) value;
- (IMBlogAddCommentRspBuilder*) clearCommentId;

- (BOOL) hasUpdateTime;
- (UInt32) updateTime;
- (IMBlogAddCommentRspBuilder*) setUpdateTime:(UInt32) value;
- (IMBlogAddCommentRspBuilder*) clearUpdateTime;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMBlogAddCommentRspBuilder*) setResultCode:(UInt32) value;
- (IMBlogAddCommentRspBuilder*) clearResultCode;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMBlogAddCommentRspBuilder*) setAttachData:(NSData*) value;
- (IMBlogAddCommentRspBuilder*) clearAttachData;
@end

#define IMBlogGetCommentReq_user_id @"userId"
#define IMBlogGetCommentReq_blog_id @"blogId"
#define IMBlogGetCommentReq_update_time @"updateTime"
#define IMBlogGetCommentReq_attach_data @"attachData"
@interface IMBlogGetCommentReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasBlogId_:1;
  BOOL hasUpdateTime_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 blogId;
  UInt32 updateTime;
}
- (BOOL) hasUserId;
- (BOOL) hasBlogId;
- (BOOL) hasUpdateTime;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 blogId;
@property (readonly) UInt32 updateTime;
@property (readonly, strong) NSData* attachData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMBlogGetCommentReqBuilder*) builder;
+ (IMBlogGetCommentReqBuilder*) builder;
+ (IMBlogGetCommentReqBuilder*) builderWithPrototype:(IMBlogGetCommentReq*) prototype;
- (IMBlogGetCommentReqBuilder*) toBuilder;

+ (IMBlogGetCommentReq*) parseFromData:(NSData*) data;
+ (IMBlogGetCommentReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogGetCommentReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMBlogGetCommentReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogGetCommentReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMBlogGetCommentReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMBlogGetCommentReqBuilder : PBGeneratedMessageBuilder {
@private
  IMBlogGetCommentReq* resultImblogGetCommentReq;
}

- (IMBlogGetCommentReq*) defaultInstance;

- (IMBlogGetCommentReqBuilder*) clear;
- (IMBlogGetCommentReqBuilder*) clone;

- (IMBlogGetCommentReq*) build;
- (IMBlogGetCommentReq*) buildPartial;

- (IMBlogGetCommentReqBuilder*) mergeFrom:(IMBlogGetCommentReq*) other;
- (IMBlogGetCommentReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMBlogGetCommentReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMBlogGetCommentReqBuilder*) setUserId:(UInt32) value;
- (IMBlogGetCommentReqBuilder*) clearUserId;

- (BOOL) hasBlogId;
- (UInt32) blogId;
- (IMBlogGetCommentReqBuilder*) setBlogId:(UInt32) value;
- (IMBlogGetCommentReqBuilder*) clearBlogId;

- (BOOL) hasUpdateTime;
- (UInt32) updateTime;
- (IMBlogGetCommentReqBuilder*) setUpdateTime:(UInt32) value;
- (IMBlogGetCommentReqBuilder*) clearUpdateTime;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMBlogGetCommentReqBuilder*) setAttachData:(NSData*) value;
- (IMBlogGetCommentReqBuilder*) clearAttachData;
@end

#define IMBlogGetCommentRsp_user_id @"userId"
#define IMBlogGetCommentRsp_blog_id @"blogId"
#define IMBlogGetCommentRsp_update_time @"updateTime"
#define IMBlogGetCommentRsp_comment_list @"commentList"
#define IMBlogGetCommentRsp_attach_data @"attachData"
@interface IMBlogGetCommentRsp : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasBlogId_:1;
  BOOL hasUpdateTime_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 blogId;
  UInt32 updateTime;
  NSMutableArray * commentListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasBlogId;
- (BOOL) hasUpdateTime;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 blogId;
@property (readonly) UInt32 updateTime;
@property (readonly, strong) NSArray<BlogInfo*> * commentList;
@property (readonly, strong) NSData* attachData;
- (BlogInfo*)commentListAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMBlogGetCommentRspBuilder*) builder;
+ (IMBlogGetCommentRspBuilder*) builder;
+ (IMBlogGetCommentRspBuilder*) builderWithPrototype:(IMBlogGetCommentRsp*) prototype;
- (IMBlogGetCommentRspBuilder*) toBuilder;

+ (IMBlogGetCommentRsp*) parseFromData:(NSData*) data;
+ (IMBlogGetCommentRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogGetCommentRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMBlogGetCommentRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMBlogGetCommentRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMBlogGetCommentRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMBlogGetCommentRspBuilder : PBGeneratedMessageBuilder {
@private
  IMBlogGetCommentRsp* resultImblogGetCommentRsp;
}

- (IMBlogGetCommentRsp*) defaultInstance;

- (IMBlogGetCommentRspBuilder*) clear;
- (IMBlogGetCommentRspBuilder*) clone;

- (IMBlogGetCommentRsp*) build;
- (IMBlogGetCommentRsp*) buildPartial;

- (IMBlogGetCommentRspBuilder*) mergeFrom:(IMBlogGetCommentRsp*) other;
- (IMBlogGetCommentRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMBlogGetCommentRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMBlogGetCommentRspBuilder*) setUserId:(UInt32) value;
- (IMBlogGetCommentRspBuilder*) clearUserId;

- (BOOL) hasBlogId;
- (UInt32) blogId;
- (IMBlogGetCommentRspBuilder*) setBlogId:(UInt32) value;
- (IMBlogGetCommentRspBuilder*) clearBlogId;

- (BOOL) hasUpdateTime;
- (UInt32) updateTime;
- (IMBlogGetCommentRspBuilder*) setUpdateTime:(UInt32) value;
- (IMBlogGetCommentRspBuilder*) clearUpdateTime;

- (NSMutableArray<BlogInfo*> *)commentList;
- (BlogInfo*)commentListAtIndex:(NSUInteger)index;
- (IMBlogGetCommentRspBuilder *)addCommentList:(BlogInfo*)value;
- (IMBlogGetCommentRspBuilder *)setCommentListArray:(NSArray<BlogInfo*> *)array;
- (IMBlogGetCommentRspBuilder *)clearCommentList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMBlogGetCommentRspBuilder*) setAttachData:(NSData*) value;
- (IMBlogGetCommentRspBuilder*) clearAttachData;
@end


// @@protoc_insertion_point(global_scope)
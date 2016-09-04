/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: econ_shared_enums.proto */

#ifndef PROTOBUF_C_econ_5fshared_5fenums_2eproto__INCLUDED
#define PROTOBUF_C_econ_5fshared_5fenums_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _CMsgGenericResult CMsgGenericResult;


/* --- enums --- */

typedef enum _EGCEconBaseMsg {
  EGCECON_BASE_MSG__k_EMsgGCGenericResult = 2579
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EGCECON_BASE_MSG)
} EGCEconBaseMsg;
typedef enum _EGCMsgResponse {
  EGCMSG_RESPONSE__k_EGCMsgResponseOK = 0,
  EGCMSG_RESPONSE__k_EGCMsgResponseDenied = 1,
  EGCMSG_RESPONSE__k_EGCMsgResponseServerError = 2,
  EGCMSG_RESPONSE__k_EGCMsgResponseTimeout = 3,
  EGCMSG_RESPONSE__k_EGCMsgResponseInvalid = 4,
  EGCMSG_RESPONSE__k_EGCMsgResponseNoMatch = 5,
  EGCMSG_RESPONSE__k_EGCMsgResponseUnknownError = 6,
  EGCMSG_RESPONSE__k_EGCMsgResponseNotLoggedOn = 7,
  EGCMSG_RESPONSE__k_EGCMsgFailedToCreate = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EGCMSG_RESPONSE)
} EGCMsgResponse;
typedef enum _EGCPartnerRequestResponse {
  EGCPARTNER_REQUEST_RESPONSE__k_EPartnerRequestOK = 1,
  EGCPARTNER_REQUEST_RESPONSE__k_EPartnerRequestBadAccount = 2,
  EGCPARTNER_REQUEST_RESPONSE__k_EPartnerRequestNotLinked = 3,
  EGCPARTNER_REQUEST_RESPONSE__k_EPartnerRequestUnsupportedPartnerType = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EGCPARTNER_REQUEST_RESPONSE)
} EGCPartnerRequestResponse;
typedef enum _EGCMsgUseItemResponse {
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_ItemUsed = 0,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_GiftNoOtherPlayers = 1,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_ServerError = 2,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_MiniGameAlreadyStarted = 3,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_ItemUsed_ItemsGranted = 4,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_DropRateBonusAlreadyGranted = 5,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_NotInLowPriorityPool = 6,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_NotHighEnoughLevel = 7,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_EventNotActive = 8,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_ItemUsed_EventPointsGranted = 9,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_MissingRequirement = 10,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_EmoticonUnlock_NoNew = 11,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_EmoticonUnlock_Complete = 12,
  EGCMSG_USE_ITEM_RESPONSE__k_EGCMsgUseItemResponse_ItemUsed_Compendium = 13
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EGCMSG_USE_ITEM_RESPONSE)
} EGCMsgUseItemResponse;

/* --- messages --- */

struct  _CMsgGenericResult
{
  ProtobufCMessage base;
  protobuf_c_boolean has_eresult;
  uint32_t eresult;
  char *debug_message;
};
#define CMSG_GENERIC_RESULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmsg_generic_result__descriptor) \
    , 0,2u, NULL }


/* CMsgGenericResult methods */
void   cmsg_generic_result__init
                     (CMsgGenericResult         *message);
size_t cmsg_generic_result__get_packed_size
                     (const CMsgGenericResult   *message);
size_t cmsg_generic_result__pack
                     (const CMsgGenericResult   *message,
                      uint8_t             *out);
size_t cmsg_generic_result__pack_to_buffer
                     (const CMsgGenericResult   *message,
                      ProtobufCBuffer     *buffer);
CMsgGenericResult *
       cmsg_generic_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmsg_generic_result__free_unpacked
                     (CMsgGenericResult *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CMsgGenericResult_Closure)
                 (const CMsgGenericResult *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    egcecon_base_msg__descriptor;
extern const ProtobufCEnumDescriptor    egcmsg_response__descriptor;
extern const ProtobufCEnumDescriptor    egcpartner_request_response__descriptor;
extern const ProtobufCEnumDescriptor    egcmsg_use_item_response__descriptor;
extern const ProtobufCMessageDescriptor cmsg_generic_result__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_econ_5fshared_5fenums_2eproto__INCLUDED */
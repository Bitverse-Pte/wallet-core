// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: coin.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_coin_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_coin_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_coin_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_coin_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_coin_2eproto;
namespace cosmos {
namespace base {
namespace v1beta1 {
class Coin;
struct CoinDefaultTypeInternal;
extern CoinDefaultTypeInternal _Coin_default_instance_;
}  // namespace v1beta1
}  // namespace base
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template<> ::cosmos::base::v1beta1::Coin* Arena::CreateMaybeMessage<::cosmos::base::v1beta1::Coin>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cosmos {
namespace base {
namespace v1beta1 {

// ===================================================================

class Coin final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.base.v1beta1.Coin) */ {
 public:
  inline Coin() : Coin(nullptr) {}
  ~Coin() override;
  explicit constexpr Coin(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Coin(const Coin& from);
  Coin(Coin&& from) noexcept
    : Coin() {
    *this = ::std::move(from);
  }

  inline Coin& operator=(const Coin& from) {
    CopyFrom(from);
    return *this;
  }
  inline Coin& operator=(Coin&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Coin& default_instance() {
    return *internal_default_instance();
  }
  static inline const Coin* internal_default_instance() {
    return reinterpret_cast<const Coin*>(
               &_Coin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Coin& a, Coin& b) {
    a.Swap(&b);
  }
  inline void Swap(Coin* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Coin* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Coin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Coin>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Coin& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Coin& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Coin* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cosmos.base.v1beta1.Coin";
  }
  protected:
  explicit Coin(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDenomFieldNumber = 1,
    kAmountFieldNumber = 2,
  };
  // string denom = 1;
  void clear_denom();
  const std::string& denom() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_denom(ArgT0&& arg0, ArgT... args);
  std::string* mutable_denom();
  PROTOBUF_NODISCARD std::string* release_denom();
  void set_allocated_denom(std::string* denom);
  private:
  const std::string& _internal_denom() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_denom(const std::string& value);
  std::string* _internal_mutable_denom();
  public:

  // string amount = 2;
  void clear_amount();
  const std::string& amount() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_amount(ArgT0&& arg0, ArgT... args);
  std::string* mutable_amount();
  PROTOBUF_NODISCARD std::string* release_amount();
  void set_allocated_amount(std::string* amount);
  private:
  const std::string& _internal_amount() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_amount(const std::string& value);
  std::string* _internal_mutable_amount();
  public:

  // @@protoc_insertion_point(class_scope:cosmos.base.v1beta1.Coin)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr denom_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr amount_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_coin_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Coin

// string denom = 1;
inline void Coin::clear_denom() {
  denom_.ClearToEmpty();
}
inline const std::string& Coin::denom() const {
  // @@protoc_insertion_point(field_get:cosmos.base.v1beta1.Coin.denom)
  return _internal_denom();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Coin::set_denom(ArgT0&& arg0, ArgT... args) {
 
 denom_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.base.v1beta1.Coin.denom)
}
inline std::string* Coin::mutable_denom() {
  std::string* _s = _internal_mutable_denom();
  // @@protoc_insertion_point(field_mutable:cosmos.base.v1beta1.Coin.denom)
  return _s;
}
inline const std::string& Coin::_internal_denom() const {
  return denom_.Get();
}
inline void Coin::_internal_set_denom(const std::string& value) {
  
  denom_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Coin::_internal_mutable_denom() {
  
  return denom_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Coin::release_denom() {
  // @@protoc_insertion_point(field_release:cosmos.base.v1beta1.Coin.denom)
  return denom_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Coin::set_allocated_denom(std::string* denom) {
  if (denom != nullptr) {
    
  } else {
    
  }
  denom_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), denom,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (denom_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    denom_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.base.v1beta1.Coin.denom)
}

// string amount = 2;
inline void Coin::clear_amount() {
  amount_.ClearToEmpty();
}
inline const std::string& Coin::amount() const {
  // @@protoc_insertion_point(field_get:cosmos.base.v1beta1.Coin.amount)
  return _internal_amount();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Coin::set_amount(ArgT0&& arg0, ArgT... args) {
 
 amount_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.base.v1beta1.Coin.amount)
}
inline std::string* Coin::mutable_amount() {
  std::string* _s = _internal_mutable_amount();
  // @@protoc_insertion_point(field_mutable:cosmos.base.v1beta1.Coin.amount)
  return _s;
}
inline const std::string& Coin::_internal_amount() const {
  return amount_.Get();
}
inline void Coin::_internal_set_amount(const std::string& value) {
  
  amount_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Coin::_internal_mutable_amount() {
  
  return amount_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Coin::release_amount() {
  // @@protoc_insertion_point(field_release:cosmos.base.v1beta1.Coin.amount)
  return amount_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Coin::set_allocated_amount(std::string* amount) {
  if (amount != nullptr) {
    
  } else {
    
  }
  amount_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), amount,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (amount_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    amount_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.base.v1beta1.Coin.amount)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace base
}  // namespace cosmos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_coin_2eproto

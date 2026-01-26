#include <java/net/UrlDeserializedState.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _UrlDeserializedState_FieldInfo_[] = {
	{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UrlDeserializedState, protocol)},
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UrlDeserializedState, host)},
	{"port", "I", nullptr, $PRIVATE | $FINAL, $field(UrlDeserializedState, port)},
	{"authority", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UrlDeserializedState, authority)},
	{"file", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UrlDeserializedState, file)},
	{"ref", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UrlDeserializedState, ref)},
	{"hashCode", "I", nullptr, $PRIVATE | $FINAL, $field(UrlDeserializedState, hashCode$)},
	{}
};

$MethodInfo _UrlDeserializedState_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(UrlDeserializedState, init$, void, $String*, $String*, int32_t, $String*, $String*, $String*, int32_t)},
	{"getAuthority", "()Ljava/lang/String;", nullptr, 0, $method(UrlDeserializedState, getAuthority, $String*)},
	{"getFile", "()Ljava/lang/String;", nullptr, 0, $method(UrlDeserializedState, getFile, $String*)},
	{"getHashCode", "()I", nullptr, 0, $method(UrlDeserializedState, getHashCode, int32_t)},
	{"getHost", "()Ljava/lang/String;", nullptr, 0, $method(UrlDeserializedState, getHost, $String*)},
	{"getPort", "()I", nullptr, 0, $method(UrlDeserializedState, getPort, int32_t)},
	{"getProtocol", "()Ljava/lang/String;", nullptr, 0, $method(UrlDeserializedState, getProtocol, $String*)},
	{"getRef", "()Ljava/lang/String;", nullptr, 0, $method(UrlDeserializedState, getRef, $String*)},
	{"reconstituteUrlString", "()Ljava/lang/String;", nullptr, 0, $method(UrlDeserializedState, reconstituteUrlString, $String*)},
	{}
};

$ClassInfo _UrlDeserializedState_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.UrlDeserializedState",
	"java.lang.Object",
	nullptr,
	_UrlDeserializedState_FieldInfo_,
	_UrlDeserializedState_MethodInfo_
};

$Object* allocate$UrlDeserializedState($Class* clazz) {
	return $of($alloc(UrlDeserializedState));
}

void UrlDeserializedState::init$($String* protocol, $String* host, int32_t port, $String* authority, $String* file, $String* ref, int32_t hashCode) {
	$set(this, protocol, protocol);
	$set(this, host, host);
	this->port = port;
	$set(this, authority, authority);
	$set(this, file, file);
	$set(this, ref, ref);
	this->hashCode$ = hashCode;
}

$String* UrlDeserializedState::getProtocol() {
	return this->protocol;
}

$String* UrlDeserializedState::getHost() {
	return this->host;
}

$String* UrlDeserializedState::getAuthority() {
	return this->authority;
}

int32_t UrlDeserializedState::getPort() {
	return this->port;
}

$String* UrlDeserializedState::getFile() {
	return this->file;
}

$String* UrlDeserializedState::getRef() {
	return this->ref;
}

int32_t UrlDeserializedState::getHashCode() {
	return this->hashCode$;
}

$String* UrlDeserializedState::reconstituteUrlString() {
	int32_t len = $nc(this->protocol)->length() + 1;
	if (this->authority != nullptr && !$nc(this->authority)->isEmpty()) {
		len += 2 + $nc(this->authority)->length();
	}
	if (this->file != nullptr) {
		len += $nc(this->file)->length();
	}
	if (this->ref != nullptr) {
		len += 1 + $nc(this->ref)->length();
	}
	$var($StringBuilder, result, $new($StringBuilder, len));
	result->append(this->protocol);
	result->append(":"_s);
	if (this->authority != nullptr && !$nc(this->authority)->isEmpty()) {
		result->append("//"_s);
		result->append(this->authority);
	}
	if (this->file != nullptr) {
		result->append(this->file);
	}
	if (this->ref != nullptr) {
		result->append("#"_s);
		result->append(this->ref);
	}
	return result->toString();
}

UrlDeserializedState::UrlDeserializedState() {
}

$Class* UrlDeserializedState::load$($String* name, bool initialize) {
	$loadClass(UrlDeserializedState, name, initialize, &_UrlDeserializedState_ClassInfo_, allocate$UrlDeserializedState);
	return class$;
}

$Class* UrlDeserializedState::class$ = nullptr;

	} // net
} // java
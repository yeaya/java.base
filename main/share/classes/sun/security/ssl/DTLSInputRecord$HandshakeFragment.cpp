#include <sun/security/ssl/DTLSInputRecord$HandshakeFragment.h>

#include <sun/security/ssl/DTLSInputRecord$RecordFragment.h>
#include <sun/security/ssl/DTLSInputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DTLSInputRecord$RecordFragment = ::sun::security::ssl::DTLSInputRecord$RecordFragment;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DTLSInputRecord$HandshakeFragment_FieldInfo_[] = {
	{"handshakeType", "B", nullptr, 0, $field(DTLSInputRecord$HandshakeFragment, handshakeType)},
	{"messageSeq", "I", nullptr, 0, $field(DTLSInputRecord$HandshakeFragment, messageSeq)},
	{"messageLength", "I", nullptr, 0, $field(DTLSInputRecord$HandshakeFragment, messageLength)},
	{"fragmentOffset", "I", nullptr, 0, $field(DTLSInputRecord$HandshakeFragment, fragmentOffset)},
	{"fragmentLength", "I", nullptr, 0, $field(DTLSInputRecord$HandshakeFragment, fragmentLength)},
	{}
};

$MethodInfo _DTLSInputRecord$HandshakeFragment_MethodInfo_[] = {
	{"<init>", "([BBBB[BIJBIIII)V", nullptr, 0, $method(static_cast<void(DTLSInputRecord$HandshakeFragment::*)($bytes*,int8_t,int8_t,int8_t,$bytes*,int32_t,int64_t,int8_t,int32_t,int32_t,int32_t,int32_t)>(&DTLSInputRecord$HandshakeFragment::init$))},
	{"compareTo", "(Lsun/security/ssl/DTLSInputRecord$RecordFragment;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DTLSInputRecord$HandshakeFragment_InnerClassesInfo_[] = {
	{"sun.security.ssl.DTLSInputRecord$HandshakeFragment", "sun.security.ssl.DTLSInputRecord", "HandshakeFragment", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.DTLSInputRecord$RecordFragment", "sun.security.ssl.DTLSInputRecord", "RecordFragment", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DTLSInputRecord$HandshakeFragment_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DTLSInputRecord$HandshakeFragment",
	"sun.security.ssl.DTLSInputRecord$RecordFragment",
	nullptr,
	_DTLSInputRecord$HandshakeFragment_FieldInfo_,
	_DTLSInputRecord$HandshakeFragment_MethodInfo_,
	nullptr,
	nullptr,
	_DTLSInputRecord$HandshakeFragment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DTLSInputRecord"
};

$Object* allocate$DTLSInputRecord$HandshakeFragment($Class* clazz) {
	return $of($alloc(DTLSInputRecord$HandshakeFragment));
}

void DTLSInputRecord$HandshakeFragment::init$($bytes* fragment, int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, int8_t handshakeType, int32_t messageLength, int32_t messageSeq, int32_t fragmentOffset, int32_t fragmentLength) {
	$DTLSInputRecord$RecordFragment::init$(fragment, contentType, majorVersion, minorVersion, recordEnS, recordEpoch, recordSeq, false);
	this->handshakeType = handshakeType;
	this->messageSeq = messageSeq;
	this->messageLength = messageLength;
	this->fragmentOffset = fragmentOffset;
	this->fragmentLength = fragmentLength;
}

int32_t DTLSInputRecord$HandshakeFragment::compareTo($DTLSInputRecord$RecordFragment* o) {
	if ($instanceOf(DTLSInputRecord$HandshakeFragment, o)) {
		$var(DTLSInputRecord$HandshakeFragment, other, $cast(DTLSInputRecord$HandshakeFragment, o));
		if (this->messageSeq != $nc(other)->messageSeq) {
			return this->messageSeq - other->messageSeq;
		} else if (this->fragmentOffset != other->fragmentOffset) {
			return this->fragmentOffset - other->fragmentOffset;
		} else if (this->fragmentLength == other->fragmentLength) {
			return 0;
		}
		return compareToSequence($nc(o)->recordEpoch, o->recordSeq);
	}
	return $DTLSInputRecord$RecordFragment::compareTo(o);
}

int32_t DTLSInputRecord$HandshakeFragment::compareTo(Object$* o) {
	return this->compareTo($cast($DTLSInputRecord$RecordFragment, o));
}

DTLSInputRecord$HandshakeFragment::DTLSInputRecord$HandshakeFragment() {
}

$Class* DTLSInputRecord$HandshakeFragment::load$($String* name, bool initialize) {
	$loadClass(DTLSInputRecord$HandshakeFragment, name, initialize, &_DTLSInputRecord$HandshakeFragment_ClassInfo_, allocate$DTLSInputRecord$HandshakeFragment);
	return class$;
}

$Class* DTLSInputRecord$HandshakeFragment::class$ = nullptr;

		} // ssl
	} // security
} // sun
#include <sun/security/ssl/DTLSInputRecord$RecordFragment.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/DTLSInputRecord.h>
#include <jcpp.h>

#undef CHANGE_CIPHER_SPEC
#undef HANDSHAKE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ContentType = ::sun::security::ssl::ContentType;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DTLSInputRecord$RecordFragment_FieldInfo_[] = {
	{"isCiphertext", "Z", nullptr, 0, $field(DTLSInputRecord$RecordFragment, isCiphertext)},
	{"contentType", "B", nullptr, 0, $field(DTLSInputRecord$RecordFragment, contentType)},
	{"majorVersion", "B", nullptr, 0, $field(DTLSInputRecord$RecordFragment, majorVersion)},
	{"minorVersion", "B", nullptr, 0, $field(DTLSInputRecord$RecordFragment, minorVersion)},
	{"recordEpoch", "I", nullptr, 0, $field(DTLSInputRecord$RecordFragment, recordEpoch)},
	{"recordSeq", "J", nullptr, 0, $field(DTLSInputRecord$RecordFragment, recordSeq)},
	{"recordEnS", "[B", nullptr, 0, $field(DTLSInputRecord$RecordFragment, recordEnS)},
	{"fragment", "[B", nullptr, 0, $field(DTLSInputRecord$RecordFragment, fragment)},
	{}
};

$MethodInfo _DTLSInputRecord$RecordFragment_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;BBB[BIJZ)V", nullptr, 0, $method(DTLSInputRecord$RecordFragment, init$, void, $ByteBuffer*, int8_t, int8_t, int8_t, $bytes*, int32_t, int64_t, bool)},
	{"<init>", "([BBBB[BIJZ)V", nullptr, 0, $method(DTLSInputRecord$RecordFragment, init$, void, $bytes*, int8_t, int8_t, int8_t, $bytes*, int32_t, int64_t, bool)},
	{"compareTo", "(Lsun/security/ssl/DTLSInputRecord$RecordFragment;)I", nullptr, $PUBLIC, $virtualMethod(DTLSInputRecord$RecordFragment, compareTo, int32_t, DTLSInputRecord$RecordFragment*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DTLSInputRecord$RecordFragment, compareTo, int32_t, Object$*)},
	{"compareToSequence", "(IJ)I", nullptr, 0, $virtualMethod(DTLSInputRecord$RecordFragment, compareToSequence, int32_t, int32_t, int64_t)},
	{}
};

$InnerClassInfo _DTLSInputRecord$RecordFragment_InnerClassesInfo_[] = {
	{"sun.security.ssl.DTLSInputRecord$RecordFragment", "sun.security.ssl.DTLSInputRecord", "RecordFragment", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DTLSInputRecord$RecordFragment_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.DTLSInputRecord$RecordFragment",
	"java.lang.Object",
	"java.lang.Comparable",
	_DTLSInputRecord$RecordFragment_FieldInfo_,
	_DTLSInputRecord$RecordFragment_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/security/ssl/DTLSInputRecord$RecordFragment;>;",
	nullptr,
	_DTLSInputRecord$RecordFragment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DTLSInputRecord"
};

$Object* allocate$DTLSInputRecord$RecordFragment($Class* clazz) {
	return $of($alloc(DTLSInputRecord$RecordFragment));
}

void DTLSInputRecord$RecordFragment::init$($ByteBuffer* fragBuf, int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, bool isCiphertext) {
	DTLSInputRecord$RecordFragment::init$(($bytes*)nullptr, contentType, majorVersion, minorVersion, recordEnS, recordEpoch, recordSeq, isCiphertext);
	$set(this, fragment, $new($bytes, $nc(fragBuf)->remaining()));
	fragBuf->get(this->fragment);
}

void DTLSInputRecord$RecordFragment::init$($bytes* fragment, int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, bool isCiphertext) {
	this->isCiphertext = isCiphertext;
	this->contentType = contentType;
	this->majorVersion = majorVersion;
	this->minorVersion = minorVersion;
	this->recordEpoch = recordEpoch;
	this->recordSeq = recordSeq;
	$set(this, recordEnS, recordEnS);
	$set(this, fragment, fragment);
}

int32_t DTLSInputRecord$RecordFragment::compareTo(DTLSInputRecord$RecordFragment* o) {
	$init($ContentType);
	if (this->contentType == $ContentType::CHANGE_CIPHER_SPEC->id) {
		if ($nc(o)->contentType == $ContentType::CHANGE_CIPHER_SPEC->id) {
			return $Integer::compare(this->recordEpoch, o->recordEpoch);
		} else {
			if ((this->recordEpoch == o->recordEpoch) && (o->contentType == $ContentType::HANDSHAKE->id)) {
				return 1;
			}
		}
	} else {
		if ($nc(o)->contentType == $ContentType::CHANGE_CIPHER_SPEC->id) {
			if ((this->recordEpoch == o->recordEpoch) && (this->contentType == $ContentType::HANDSHAKE->id)) {
				return -1;
			} else {
				return compareToSequence(o->recordEpoch, o->recordSeq);
			}
		}
	}
	return compareToSequence($nc(o)->recordEpoch, o->recordSeq);
}

int32_t DTLSInputRecord$RecordFragment::compareToSequence(int32_t epoch, int64_t seq) {
	if (this->recordEpoch > epoch) {
		return 1;
	} else if (this->recordEpoch == epoch) {
		return $Long::compare(this->recordSeq, seq);
	} else {
		return -1;
	}
}

int32_t DTLSInputRecord$RecordFragment::compareTo(Object$* o) {
	return this->compareTo($cast(DTLSInputRecord$RecordFragment, o));
}

DTLSInputRecord$RecordFragment::DTLSInputRecord$RecordFragment() {
}

$Class* DTLSInputRecord$RecordFragment::load$($String* name, bool initialize) {
	$loadClass(DTLSInputRecord$RecordFragment, name, initialize, &_DTLSInputRecord$RecordFragment_ClassInfo_, allocate$DTLSInputRecord$RecordFragment);
	return class$;
}

$Class* DTLSInputRecord$RecordFragment::class$ = nullptr;

		} // ssl
	} // security
} // sun
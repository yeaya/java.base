#include <sun/security/timestamp/TSResponse$TimestampException.h>

#include <java/io/IOException.h>
#include <sun/security/timestamp/TSResponse.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace timestamp {

$FieldInfo _TSResponse$TimestampException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TSResponse$TimestampException, serialVersionUID)},
	{}
};

$MethodInfo _TSResponse$TimestampException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TSResponse$TimestampException::*)($String*)>(&TSResponse$TimestampException::init$))},
	{}
};

$InnerClassInfo _TSResponse$TimestampException_InnerClassesInfo_[] = {
	{"sun.security.timestamp.TSResponse$TimestampException", "sun.security.timestamp.TSResponse", "TimestampException", $STATIC | $FINAL},
	{}
};

$ClassInfo _TSResponse$TimestampException_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.timestamp.TSResponse$TimestampException",
	"java.io.IOException",
	nullptr,
	_TSResponse$TimestampException_FieldInfo_,
	_TSResponse$TimestampException_MethodInfo_,
	nullptr,
	nullptr,
	_TSResponse$TimestampException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.timestamp.TSResponse"
};

$Object* allocate$TSResponse$TimestampException($Class* clazz) {
	return $of($alloc(TSResponse$TimestampException));
}

void TSResponse$TimestampException::init$($String* message) {
	$IOException::init$(message);
}

TSResponse$TimestampException::TSResponse$TimestampException() {
}

TSResponse$TimestampException::TSResponse$TimestampException(const TSResponse$TimestampException& e) : $IOException(e) {
}

void TSResponse$TimestampException::throw$() {
	throw *this;
}

$Class* TSResponse$TimestampException::load$($String* name, bool initialize) {
	$loadClass(TSResponse$TimestampException, name, initialize, &_TSResponse$TimestampException_ClassInfo_, allocate$TSResponse$TimestampException);
	return class$;
}

$Class* TSResponse$TimestampException::class$ = nullptr;

		} // timestamp
	} // security
} // sun
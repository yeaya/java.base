#include <sun/security/ssl/OutputRecord$T13PaddingHolder.h>

#include <sun/security/ssl/OutputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutputRecord = ::sun::security::ssl::OutputRecord;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _OutputRecord$T13PaddingHolder_FieldInfo_[] = {
	{"zeros", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputRecord$T13PaddingHolder, zeros)},
	{}
};

$MethodInfo _OutputRecord$T13PaddingHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OutputRecord$T13PaddingHolder::*)()>(&OutputRecord$T13PaddingHolder::init$))},
	{}
};

$InnerClassInfo _OutputRecord$T13PaddingHolder_InnerClassesInfo_[] = {
	{"sun.security.ssl.OutputRecord$T13PaddingHolder", "sun.security.ssl.OutputRecord", "T13PaddingHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _OutputRecord$T13PaddingHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.OutputRecord$T13PaddingHolder",
	"java.lang.Object",
	nullptr,
	_OutputRecord$T13PaddingHolder_FieldInfo_,
	_OutputRecord$T13PaddingHolder_MethodInfo_,
	nullptr,
	nullptr,
	_OutputRecord$T13PaddingHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.OutputRecord"
};

$Object* allocate$OutputRecord$T13PaddingHolder($Class* clazz) {
	return $of($alloc(OutputRecord$T13PaddingHolder));
}

$bytes* OutputRecord$T13PaddingHolder::zeros = nullptr;

void OutputRecord$T13PaddingHolder::init$() {
}

void clinit$OutputRecord$T13PaddingHolder($Class* class$) {
	$assignStatic(OutputRecord$T13PaddingHolder::zeros, $new($bytes, 16));
}

OutputRecord$T13PaddingHolder::OutputRecord$T13PaddingHolder() {
}

$Class* OutputRecord$T13PaddingHolder::load$($String* name, bool initialize) {
	$loadClass(OutputRecord$T13PaddingHolder, name, initialize, &_OutputRecord$T13PaddingHolder_ClassInfo_, clinit$OutputRecord$T13PaddingHolder, allocate$OutputRecord$T13PaddingHolder);
	return class$;
}

$Class* OutputRecord$T13PaddingHolder::class$ = nullptr;

		} // ssl
	} // security
} // sun
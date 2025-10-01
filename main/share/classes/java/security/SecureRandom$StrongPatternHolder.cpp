#include <java/security/SecureRandom$StrongPatternHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/SecureRandom.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace security {

$FieldInfo _SecureRandom$StrongPatternHolder_FieldInfo_[] = {
	{"pattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $staticField(SecureRandom$StrongPatternHolder, pattern)},
	{}
};

$MethodInfo _SecureRandom$StrongPatternHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SecureRandom$StrongPatternHolder::*)()>(&SecureRandom$StrongPatternHolder::init$))},
	{}
};

$InnerClassInfo _SecureRandom$StrongPatternHolder_InnerClassesInfo_[] = {
	{"java.security.SecureRandom$StrongPatternHolder", "java.security.SecureRandom", "StrongPatternHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SecureRandom$StrongPatternHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.SecureRandom$StrongPatternHolder",
	"java.lang.Object",
	nullptr,
	_SecureRandom$StrongPatternHolder_FieldInfo_,
	_SecureRandom$StrongPatternHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SecureRandom$StrongPatternHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.SecureRandom"
};

$Object* allocate$SecureRandom$StrongPatternHolder($Class* clazz) {
	return $of($alloc(SecureRandom$StrongPatternHolder));
}

$Pattern* SecureRandom$StrongPatternHolder::pattern = nullptr;

void SecureRandom$StrongPatternHolder::init$() {
}

void clinit$SecureRandom$StrongPatternHolder($Class* class$) {
	$assignStatic(SecureRandom$StrongPatternHolder::pattern, $Pattern::compile("\\s*([\\S&&[^:,]]*)(\\:([\\S&&[^,]]*))?\\s*(\\,(.*))?"_s));
}

SecureRandom$StrongPatternHolder::SecureRandom$StrongPatternHolder() {
}

$Class* SecureRandom$StrongPatternHolder::load$($String* name, bool initialize) {
	$loadClass(SecureRandom$StrongPatternHolder, name, initialize, &_SecureRandom$StrongPatternHolder_ClassInfo_, clinit$SecureRandom$StrongPatternHolder, allocate$SecureRandom$StrongPatternHolder);
	return class$;
}

$Class* SecureRandom$StrongPatternHolder::class$ = nullptr;

	} // security
} // java
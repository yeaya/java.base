#include <Enormous.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Base64 = ::java::util::Base64;
using $Base64$Encoder = ::java::util::Base64$Encoder;

$MethodInfo _Enormous_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Enormous::*)()>(&Enormous::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Enormous::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Enormous_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Enormous",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Enormous_MethodInfo_
};

$Object* allocate$Enormous($Class* clazz) {
	return $of($alloc(Enormous));
}

void Enormous::init$() {
}

void Enormous::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$$new($String, $$new($chars, 0x01000001))->getBytes("ASCII"_s);
	$var($bytes, bytes, $new($bytes, 0x01000001));
	$new($String, bytes, "ASCII"_s);
	$nc($($Base64::getEncoder()))->encodeToString(bytes);
}

Enormous::Enormous() {
}

$Class* Enormous::load$($String* name, bool initialize) {
	$loadClass(Enormous, name, initialize, &_Enormous_ClassInfo_, allocate$Enormous);
	return class$;
}

$Class* Enormous::class$ = nullptr;
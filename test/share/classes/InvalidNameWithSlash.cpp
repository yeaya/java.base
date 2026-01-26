#include <InvalidNameWithSlash.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InvalidNameWithSlash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidNameWithSlash, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InvalidNameWithSlash, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _InvalidNameWithSlash_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InvalidNameWithSlash",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InvalidNameWithSlash_MethodInfo_
};

$Object* allocate$InvalidNameWithSlash($Class* clazz) {
	return $of($alloc(InvalidNameWithSlash));
}

void InvalidNameWithSlash::init$() {
}

void InvalidNameWithSlash::main($StringArray* args) {
	$load(InvalidNameWithSlash);
	$beforeCallerSensitive();
	bool exceptionOccurred = false;
	try {
		$Class* c = $Class::forName("java/lang.Object"_s);
	} catch ($Exception& e) {
		exceptionOccurred = true;
	}
	if (!exceptionOccurred) {
		$throwNew($Exception, "forName accepting names with slashes?"_s);
	}
}

InvalidNameWithSlash::InvalidNameWithSlash() {
}

$Class* InvalidNameWithSlash::load$($String* name, bool initialize) {
	$loadClass(InvalidNameWithSlash, name, initialize, &_InvalidNameWithSlash_ClassInfo_, allocate$InvalidNameWithSlash);
	return class$;
}

$Class* InvalidNameWithSlash::class$ = nullptr;
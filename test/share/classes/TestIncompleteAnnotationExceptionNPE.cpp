#include <TestIncompleteAnnotationExceptionNPE.h>

#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/IncompleteAnnotationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $IncompleteAnnotationException = ::java::lang::annotation::IncompleteAnnotationException;

$MethodInfo _TestIncompleteAnnotationExceptionNPE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestIncompleteAnnotationExceptionNPE::*)()>(&TestIncompleteAnnotationExceptionNPE::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestIncompleteAnnotationExceptionNPE::main))},
	{}
};

$ClassInfo _TestIncompleteAnnotationExceptionNPE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestIncompleteAnnotationExceptionNPE",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestIncompleteAnnotationExceptionNPE_MethodInfo_
};

$Object* allocate$TestIncompleteAnnotationExceptionNPE($Class* clazz) {
	return $of($alloc(TestIncompleteAnnotationExceptionNPE));
}

void TestIncompleteAnnotationExceptionNPE::init$() {
}

void TestIncompleteAnnotationExceptionNPE::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	$load($Annotation);
	$Class* annotationType = $Annotation::class$;
	$var($String, elementName, "name"_s);
	try {
		$var($Object, o, $new($IncompleteAnnotationException, nullptr, nullptr));
		++errors;
	} catch ($NullPointerException& npe) {
	}
	try {
		$var($Object, o, $new($IncompleteAnnotationException, annotationType, nullptr));
		++errors;
	} catch ($NullPointerException& npe) {
	}
	try {
		$var($Object, o, $new($IncompleteAnnotationException, nullptr, elementName));
		++errors;
	} catch ($NullPointerException& npe) {
	}
	if (errors != 0) {
		$throwNew($RuntimeException, $$str({"Encountered "_s, $$str(errors), " error(s) during construction."_s}));
	}
}

TestIncompleteAnnotationExceptionNPE::TestIncompleteAnnotationExceptionNPE() {
}

$Class* TestIncompleteAnnotationExceptionNPE::load$($String* name, bool initialize) {
	$loadClass(TestIncompleteAnnotationExceptionNPE, name, initialize, &_TestIncompleteAnnotationExceptionNPE_ClassInfo_, allocate$TestIncompleteAnnotationExceptionNPE);
	return class$;
}

$Class* TestIncompleteAnnotationExceptionNPE::class$ = nullptr;
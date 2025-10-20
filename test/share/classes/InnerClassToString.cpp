#include <InnerClassToString.h>

#include <InnerClassToString$MyEntity.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Parameter.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $InnerClassToString$MyEntity = ::InnerClassToString$MyEntity;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Constructor = ::java::lang::reflect::Constructor;
using $Executable = ::java::lang::reflect::Executable;
using $Parameter = ::java::lang::reflect::Parameter;
using $Type = ::java::lang::reflect::Type;
using $Set = ::java::util::Set;

$FieldInfo _InnerClassToString_FieldInfo_[] = {
	{"genericParamClasses", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(InnerClassToString, genericParamClasses)},
	{"nongenericParamClasses", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(InnerClassToString, nongenericParamClasses)},
	{"errors", "I", nullptr, $PRIVATE, $field(InnerClassToString, errors)},
	{}
};

$MethodInfo _InnerClassToString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InnerClassToString::*)()>(&InnerClassToString::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InnerClassToString::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PRIVATE, $method(static_cast<void(InnerClassToString::*)()>(&InnerClassToString::run)), "java.lang.Exception"},
	{"test", "(Ljava/lang/reflect/Constructor;[Ljava/lang/Class;)V", "(Ljava/lang/reflect/Constructor<LInnerClassToString$MyEntity;>;[Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(InnerClassToString::*)($Constructor*,$ClassArray*)>(&InnerClassToString::test))},
	{}
};

$InnerClassInfo _InnerClassToString_InnerClassesInfo_[] = {
	{"InnerClassToString$MyEntity", "InnerClassToString", "MyEntity", $PUBLIC},
	{}
};

$ClassInfo _InnerClassToString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InnerClassToString",
	"java.lang.Object",
	nullptr,
	_InnerClassToString_FieldInfo_,
	_InnerClassToString_MethodInfo_,
	nullptr,
	nullptr,
	_InnerClassToString_InnerClassesInfo_,
	nullptr,
	nullptr,
	"InnerClassToString$MyEntity"
};

$Object* allocate$InnerClassToString($Class* clazz) {
	return $of($alloc(InnerClassToString));
}

$ClassArray* InnerClassToString::genericParamClasses = nullptr;
$ClassArray* InnerClassToString::nongenericParamClasses = nullptr;

void InnerClassToString::init$() {
	this->errors = 0;
}

void InnerClassToString::test($Constructor* constructor, $ClassArray* paramClasses) {
	$useLocalCurrentObjectStackCache();
	$var($ParameterArray, params, $nc(constructor)->getParameters());
	for (int32_t i = 0; i < $nc(params)->length; ++i) {
		$var($Parameter, parameter, params->get(i));
		$init($System);
		$nc($System::out)->println($($nc(parameter)->toString()));
		if (!$nc($of($nc(parameter)->getType()))->equals($nc(paramClasses)->get(i))) {
			++this->errors;
			$var($String, var$0, $$str({"Expected type "_s, $nc(paramClasses)->get(i), " but got "_s}));
			$nc($System::err)->println($$concat(var$0, $(parameter->getType())));
		}
		$nc($System::out)->println($($of($nc(parameter)->getParameterizedType())));
		$nc($System::out)->println($($of($nc(parameter)->getAnnotatedType())));
	}
}

void InnerClassToString::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($InnerClassToString$MyEntity);
		$load($Set);
	$var($Constructor, genericConstructor, $InnerClassToString$MyEntity::class$->getConstructor($$new($ClassArray, {
		InnerClassToString::class$,
		$Set::class$
	})));
	test(genericConstructor, InnerClassToString::genericParamClasses);
		$load($String);
	$var($Constructor, nongenericConstructor, $InnerClassToString$MyEntity::class$->getConstructor($$new($ClassArray, {
		InnerClassToString::class$,
		$String::class$
	})));
	test(nongenericConstructor, InnerClassToString::nongenericParamClasses);
	if (this->errors != 0) {
		$throwNew($RuntimeException, $$str({$$str(this->errors), " errors in test"_s}));
	}
}

void InnerClassToString::main($StringArray* args) {
	$init(InnerClassToString);
	$$new(InnerClassToString)->run();
}

void clinit$InnerClassToString($Class* class$) {
		$load($Set);
	$assignStatic(InnerClassToString::genericParamClasses, $new($ClassArray, {
		InnerClassToString::class$,
		$Set::class$
	}));
		$load($String);
	$assignStatic(InnerClassToString::nongenericParamClasses, $new($ClassArray, {
		InnerClassToString::class$,
		$String::class$
	}));
}

InnerClassToString::InnerClassToString() {
}

$Class* InnerClassToString::load$($String* name, bool initialize) {
	$loadClass(InnerClassToString, name, initialize, &_InnerClassToString_ClassInfo_, clinit$InnerClassToString, allocate$InnerClassToString);
	return class$;
}

$Class* InnerClassToString::class$ = nullptr;
#include <GetAnnotatedNestedSuperclass.h>

#include <GetAnnotatedNestedSuperclass$Y.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $GetAnnotatedNestedSuperclass$Y = ::GetAnnotatedNestedSuperclass$Y;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;

$MethodInfo _GetAnnotatedNestedSuperclass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedNestedSuperclass::*)()>(&GetAnnotatedNestedSuperclass::init$))},
	{"assertEquals", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,Object$*)>(&GetAnnotatedNestedSuperclass::assertEquals))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetAnnotatedNestedSuperclass::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _GetAnnotatedNestedSuperclass_InnerClassesInfo_[] = {
	{"GetAnnotatedNestedSuperclass$Y", "GetAnnotatedNestedSuperclass", "Y", $STATIC},
	{"GetAnnotatedNestedSuperclass$X", "GetAnnotatedNestedSuperclass", "X", $STATIC},
	{"GetAnnotatedNestedSuperclass$E", "GetAnnotatedNestedSuperclass", "E", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"GetAnnotatedNestedSuperclass$D", "GetAnnotatedNestedSuperclass", "D", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"GetAnnotatedNestedSuperclass$C", "GetAnnotatedNestedSuperclass", "C", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"GetAnnotatedNestedSuperclass$B", "GetAnnotatedNestedSuperclass", "B", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"GetAnnotatedNestedSuperclass$A", "GetAnnotatedNestedSuperclass", "A", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _GetAnnotatedNestedSuperclass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedNestedSuperclass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetAnnotatedNestedSuperclass$Y,GetAnnotatedNestedSuperclass$X,GetAnnotatedNestedSuperclass$E,GetAnnotatedNestedSuperclass$D,GetAnnotatedNestedSuperclass$C,GetAnnotatedNestedSuperclass$B,GetAnnotatedNestedSuperclass$A"
};

$Object* allocate$GetAnnotatedNestedSuperclass($Class* clazz) {
	return $of($alloc(GetAnnotatedNestedSuperclass));
}

void GetAnnotatedNestedSuperclass::init$() {
}

void GetAnnotatedNestedSuperclass::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$load($GetAnnotatedNestedSuperclass$Y);
	$var($AnnotatedType, x, $GetAnnotatedNestedSuperclass$Y::class$->getAnnotatedSuperclass());
	assertEquals($($Arrays::toString($($nc(x)->getAnnotations()))), "[@GetAnnotatedNestedSuperclass$A()]"_s);
	$var($AnnotatedParameterizedType, xpt, $cast($AnnotatedParameterizedType, x));
	{
		$var($AnnotatedType, arg, $nc($($nc(xpt)->getAnnotatedActualTypeArguments()))->get(0));
		assertEquals($($Arrays::toString($($nc(arg)->getAnnotations()))), "[@GetAnnotatedNestedSuperclass$B()]"_s);
	}
	{
		$var($AnnotatedType, arg, $nc($($nc(xpt)->getAnnotatedActualTypeArguments()))->get(1));
		assertEquals($($Arrays::toString($($nc(arg)->getAnnotations()))), "[@GetAnnotatedNestedSuperclass$C()]"_s);
	}
	{
		$var($AnnotatedType, arg, $nc($($nc(xpt)->getAnnotatedActualTypeArguments()))->get(2));
		assertEquals($($Arrays::toString($($nc(arg)->getAnnotations()))), "[@GetAnnotatedNestedSuperclass$D()]"_s);
		$var($AnnotatedType, nestedArg, $nc($($nc(($cast($AnnotatedParameterizedType, arg)))->getAnnotatedActualTypeArguments()))->get(0));
		assertEquals($($Arrays::toString($($nc(nestedArg)->getAnnotations()))), "[@GetAnnotatedNestedSuperclass$E()]"_s);
	}
}

void GetAnnotatedNestedSuperclass::assertEquals(Object$* expected, Object$* actual) {
	if (!$Objects::equals(expected, actual)) {
		$throwNew($AssertionError, $of($$str({"expected: "_s, expected, "; actual="_s, actual})));
	}
}

GetAnnotatedNestedSuperclass::GetAnnotatedNestedSuperclass() {
}

$Class* GetAnnotatedNestedSuperclass::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedNestedSuperclass, name, initialize, &_GetAnnotatedNestedSuperclass_ClassInfo_, allocate$GetAnnotatedNestedSuperclass);
	return class$;
}

$Class* GetAnnotatedNestedSuperclass::class$ = nullptr;
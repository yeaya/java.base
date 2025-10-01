#include <java/lang/invoke/TypeDescriptor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _TypeDescriptor_MethodInfo_[] = {
	{"descriptorString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TypeDescriptor_InnerClassesInfo_[] = {
	{"java.lang.invoke.TypeDescriptor$OfMethod", "java.lang.invoke.TypeDescriptor", "OfMethod", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.invoke.TypeDescriptor$OfField", "java.lang.invoke.TypeDescriptor", "OfField", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TypeDescriptor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.invoke.TypeDescriptor",
	nullptr,
	nullptr,
	nullptr,
	_TypeDescriptor_MethodInfo_,
	nullptr,
	nullptr,
	_TypeDescriptor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.TypeDescriptor$OfMethod,java.lang.invoke.TypeDescriptor$OfField"
};

$Object* allocate$TypeDescriptor($Class* clazz) {
	return $of($alloc(TypeDescriptor));
}

$Class* TypeDescriptor::load$($String* name, bool initialize) {
	$loadClass(TypeDescriptor, name, initialize, &_TypeDescriptor_ClassInfo_, allocate$TypeDescriptor);
	return class$;
}

$Class* TypeDescriptor::class$ = nullptr;

		} // invoke
	} // lang
} // java
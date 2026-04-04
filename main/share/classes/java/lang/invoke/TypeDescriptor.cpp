#include <java/lang/invoke/TypeDescriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$Class* TypeDescriptor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"descriptorString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor, descriptorString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.TypeDescriptor$OfMethod", "java.lang.invoke.TypeDescriptor", "OfMethod", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.lang.invoke.TypeDescriptor$OfField", "java.lang.invoke.TypeDescriptor", "OfField", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.invoke.TypeDescriptor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.TypeDescriptor$OfMethod,java.lang.invoke.TypeDescriptor$OfField"
	};
	$loadClass(TypeDescriptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeDescriptor);
	});
	return class$;
}

$Class* TypeDescriptor::class$ = nullptr;

		} // invoke
	} // lang
} // java
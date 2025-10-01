#include <InheritedMethods$Foo.h>

#include <InheritedMethods.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InheritedMethods = ::InheritedMethods;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $List = ::java::util::List;

$InnerClassInfo _InheritedMethods$Foo_InnerClassesInfo_[] = {
	{"InheritedMethods$Foo", "InheritedMethods", "Foo", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InheritedMethods$Foo_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"InheritedMethods$Foo",
	nullptr,
	"java.util.List",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_InheritedMethods$Foo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InheritedMethods"
};

$Object* allocate$InheritedMethods$Foo($Class* clazz) {
	return $of($alloc(InheritedMethods$Foo));
}

$Class* InheritedMethods$Foo::load$($String* name, bool initialize) {
	$loadClass(InheritedMethods$Foo, name, initialize, &_InheritedMethods$Foo_ClassInfo_, allocate$InheritedMethods$Foo);
	return class$;
}

$Class* InheritedMethods$Foo::class$ = nullptr;
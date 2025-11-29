#include <InheritedMethods$Foo.h>

#include <InheritedMethods.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

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
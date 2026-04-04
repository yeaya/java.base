#include <SampleNest.h>
#include <SampleNest$1.h>
#include <SampleNest$1LocalClass.h>
#include <java/lang/Runnable.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $SampleNest$1 = ::SampleNest$1;
using $SampleNest$1LocalClass = ::SampleNest$1LocalClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;

$List* SampleNest::_nestedTypes = nullptr;

void SampleNest::gather($Class* c) {
	$init(SampleNest);
	$beforeCallerSensitive();
	$nc(SampleNest::_nestedTypes)->add(c);
	{
		$var($ClassArray, arr$, $nc(c)->getDeclaredClasses());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$Class* d = arr$->get(i$);
			{
				gather(d);
			}
		}
	}
}

$ClassArray* SampleNest::nestedTypes() {
	$init(SampleNest);
	return $cast($ClassArray, $nc(SampleNest::_nestedTypes)->toArray($$new($ClassArray, 0)));
}

void SampleNest::init$() {
	{
	}
	$load($SampleNest$1LocalClass);
	$nc(SampleNest::_nestedTypes)->add($SampleNest$1LocalClass::class$);
	$var($Runnable, r, $new($SampleNest$1, this));
	r->run();
}

void SampleNest::clinit$($Class* clazz) {
	$assignStatic(SampleNest::_nestedTypes, $new($LinkedList));
	{
		SampleNest::gather(SampleNest::class$);
		$var(SampleNest, s, $new(SampleNest));
	}
}

SampleNest::SampleNest() {
}

$Class* SampleNest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_nestedTypes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Class<*>;>;", $STATIC, $staticField(SampleNest, _nestedTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SampleNest, init$, void)},
		{"gather", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $STATIC, $staticMethod(SampleNest, gather, void, $Class*)},
		{"nestedTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticMethod(SampleNest, nestedTypes, $ClassArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$DeepNest1", "SampleNest", "DeepNest1", $STATIC},
		{"SampleNest$InnerIface", "SampleNest", "InnerIface", $STATIC | $INTERFACE | $ABSTRACT},
		{"SampleNest$InnerClass", "SampleNest", "InnerClass", 0},
		{"SampleNest$StaticIface", "SampleNest", "StaticIface", $STATIC | $INTERFACE | $ABSTRACT},
		{"SampleNest$StaticClass", "SampleNest", "StaticClass", $STATIC},
		{"SampleNest$1", nullptr, nullptr, 0},
		{"SampleNest$1LocalClass", nullptr, "LocalClass", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SampleNest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SampleNest$DeepNest1,SampleNest$DeepNest1$DeepNest2,SampleNest$DeepNest1$DeepNest2$DeepNest3,SampleNest$InnerIface,SampleNest$InnerClass,SampleNest$StaticIface,SampleNest$StaticClass,SampleNest$1,SampleNest$1LocalClass"
	};
	$loadClass(SampleNest, name, initialize, &classInfo$$, SampleNest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest);
	});
	return class$;
}

$Class* SampleNest::class$ = nullptr;
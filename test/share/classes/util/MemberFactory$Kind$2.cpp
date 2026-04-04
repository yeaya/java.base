#include <util/MemberFactory$Kind$2.h>
#include <java/lang/AssertionError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Method.h>
#include <util/MemberFactory$Kind.h>
#include <util/MemberFactory.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $MemberFactory = ::util::MemberFactory;
using $MemberFactory$Kind = ::util::MemberFactory$Kind;

namespace util {

bool MemberFactory$Kind$2::$assertionsDisabled = false;

void MemberFactory$Kind$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$MemberFactory$Kind::init$($enum$name, $enum$ordinal);
}

$AccessibleObject* MemberFactory$Kind$2::apply($Class* declaringClass, $MemberFactory* factory) {
	$beforeCallerSensitive();
	if (!MemberFactory$Kind$2::$assertionsDisabled && !$equals($nc(factory)->kind, this)) {
		$throwNew($AssertionError);
	}
	try {
		return $nc(declaringClass)->getDeclaredMethod($nc(factory)->name$, $nc(factory)->parameterTypes);
	} catch ($NoSuchMethodException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

$Object* MemberFactory$Kind$2::apply(Object$* declaringClass, Object$* factory) {
	return this->apply($cast($Class, declaringClass), $cast($MemberFactory, factory));
}

void MemberFactory$Kind$2::clinit$($Class* clazz) {
	$load($MemberFactory);
	MemberFactory$Kind$2::$assertionsDisabled = !$MemberFactory::class$->desiredAssertionStatus();
}

MemberFactory$Kind$2::MemberFactory$Kind$2() {
}

$Class* MemberFactory$Kind$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberFactory$Kind$2, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(MemberFactory$Kind$2, init$, void, $String*, int32_t)},
		{"apply", "(Ljava/lang/Class;Lutil/MemberFactory;)Ljava/lang/reflect/AccessibleObject;", "(Ljava/lang/Class<*>;Lutil/MemberFactory;)Ljava/lang/reflect/AccessibleObject;", $PUBLIC, $method(MemberFactory$Kind$2, apply, $AccessibleObject*, $Class*, $MemberFactory*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MemberFactory$Kind$2, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"util.MemberFactory$Kind",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"util.MemberFactory$Kind", "util.MemberFactory", "Kind", $STATIC | $ABSTRACT | $ENUM},
		{"util.MemberFactory$Kind$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"util.MemberFactory$Kind$2",
		"util.MemberFactory$Kind",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"util.MemberFactory"
	};
	$loadClass(MemberFactory$Kind$2, name, initialize, &classInfo$$, MemberFactory$Kind$2::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MemberFactory$Kind$2));
	});
	return class$;
}

$Class* MemberFactory$Kind$2::class$ = nullptr;

} // util
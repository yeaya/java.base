#include <ReferenceClone$CloneableRef.h>
#include <ReferenceClone.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Object* ReferenceClone$CloneableRef::clone() {
	 return this->$Cloneable::clone();
}

$Class* ReferenceClone$CloneableRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"ReferenceClone$CloneableRef",
		nullptr,
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReferenceClone"
	};
	$loadClass(ReferenceClone$CloneableRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceClone$CloneableRef);
	});
	return class$;
}

$Class* ReferenceClone$CloneableRef::class$ = nullptr;
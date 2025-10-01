#include <ReferenceClone$CloneableRef.h>

#include <ReferenceClone.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ReferenceClone = ::ReferenceClone;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReferenceClone$CloneableRef_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ReferenceClone$CloneableRef_InnerClassesInfo_[] = {
	{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReferenceClone$CloneableRef_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"ReferenceClone$CloneableRef",
	nullptr,
	"java.lang.Cloneable",
	nullptr,
	_ReferenceClone$CloneableRef_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceClone$CloneableRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReferenceClone"
};

$Object* allocate$ReferenceClone$CloneableRef($Class* clazz) {
	return $of($alloc(ReferenceClone$CloneableRef));
}

$Object* ReferenceClone$CloneableRef::clone() {
	 return this->$Cloneable::clone();
}

$Class* ReferenceClone$CloneableRef::load$($String* name, bool initialize) {
	$loadClass(ReferenceClone$CloneableRef, name, initialize, &_ReferenceClone$CloneableRef_ClassInfo_, allocate$ReferenceClone$CloneableRef);
	return class$;
}

$Class* ReferenceClone$CloneableRef::class$ = nullptr;
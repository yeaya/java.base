#include <InnerClassToString$MyEntity.h>

#include <InnerClassToString.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $InnerClassToString = ::InnerClassToString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

$FieldInfo _InnerClassToString$MyEntity_FieldInfo_[] = {
	{"this$0", "LInnerClassToString;", nullptr, $FINAL | $SYNTHETIC, $field(InnerClassToString$MyEntity, this$0)},
	{}
};

$MethodInfo _InnerClassToString$MyEntity_MethodInfo_[] = {
	{"<init>", "(LInnerClassToString;Ljava/util/Set;)V", "(Ljava/util/Set<*>;)V", $PUBLIC, $method(static_cast<void(InnerClassToString$MyEntity::*)($InnerClassToString*,$Set*)>(&InnerClassToString$MyEntity::init$))},
	{"<init>", "(LInnerClassToString;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InnerClassToString$MyEntity::*)($InnerClassToString*,$String*)>(&InnerClassToString$MyEntity::init$))},
	{}
};

$InnerClassInfo _InnerClassToString$MyEntity_InnerClassesInfo_[] = {
	{"InnerClassToString$MyEntity", "InnerClassToString", "MyEntity", $PUBLIC},
	{}
};

$ClassInfo _InnerClassToString$MyEntity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InnerClassToString$MyEntity",
	"java.lang.Object",
	nullptr,
	_InnerClassToString$MyEntity_FieldInfo_,
	_InnerClassToString$MyEntity_MethodInfo_,
	nullptr,
	nullptr,
	_InnerClassToString$MyEntity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InnerClassToString"
};

$Object* allocate$InnerClassToString$MyEntity($Class* clazz) {
	return $of($alloc(InnerClassToString$MyEntity));
}

void InnerClassToString$MyEntity::init$($InnerClassToString* this$0, $Set* names) {
	$set(this, this$0, this$0);
}

void InnerClassToString$MyEntity::init$($InnerClassToString* this$0, $String* names) {
	$set(this, this$0, this$0);
}

InnerClassToString$MyEntity::InnerClassToString$MyEntity() {
}

$Class* InnerClassToString$MyEntity::load$($String* name, bool initialize) {
	$loadClass(InnerClassToString$MyEntity, name, initialize, &_InnerClassToString$MyEntity_ClassInfo_, allocate$InnerClassToString$MyEntity);
	return class$;
}

$Class* InnerClassToString$MyEntity::class$ = nullptr;
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

void InnerClassToString$MyEntity::init$($InnerClassToString* this$0, $Set* names) {
	$set(this, this$0, this$0);
}

void InnerClassToString$MyEntity::init$($InnerClassToString* this$0, $String* names) {
	$set(this, this$0, this$0);
}

InnerClassToString$MyEntity::InnerClassToString$MyEntity() {
}

$Class* InnerClassToString$MyEntity::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LInnerClassToString;", nullptr, $FINAL | $SYNTHETIC, $field(InnerClassToString$MyEntity, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LInnerClassToString;Ljava/util/Set;)V", "(Ljava/util/Set<*>;)V", $PUBLIC, $method(InnerClassToString$MyEntity, init$, void, $InnerClassToString*, $Set*)},
		{"<init>", "(LInnerClassToString;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InnerClassToString$MyEntity, init$, void, $InnerClassToString*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InnerClassToString$MyEntity", "InnerClassToString", "MyEntity", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InnerClassToString$MyEntity",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"InnerClassToString"
	};
	$loadClass(InnerClassToString$MyEntity, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InnerClassToString$MyEntity);
	});
	return class$;
}

$Class* InnerClassToString$MyEntity::class$ = nullptr;
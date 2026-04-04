#include <java/util/EnumSet$SerializationProxy.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

#undef ZERO_LENGTH_ENUM_ARRAY

using $EnumArray = $Array<::java::lang::Enum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;

namespace java {
	namespace util {

$EnumArray* EnumSet$SerializationProxy::ZERO_LENGTH_ENUM_ARRAY = nullptr;

void EnumSet$SerializationProxy::init$($EnumSet* set) {
	$set(this, elementType, $nc(set)->elementType);
	$set(this, elements, $cast($EnumArray, set->toArray(EnumSet$SerializationProxy::ZERO_LENGTH_ENUM_ARRAY)));
}

$Object* EnumSet$SerializationProxy::readResolve() {
	$useLocalObjectStack();
	$var($EnumSet, result, $EnumSet::noneOf(this->elementType));
	{
		$var($EnumArray, arr$, this->elements);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Enum, e, arr$->get(i$));
			$nc(result)->add(e);
		}
	}
	return $of(result);
}

void EnumSet$SerializationProxy::clinit$($Class* clazz) {
	$assignStatic(EnumSet$SerializationProxy::ZERO_LENGTH_ENUM_ARRAY, $new($EnumArray, 0));
}

EnumSet$SerializationProxy::EnumSet$SerializationProxy() {
}

$Class* EnumSet$SerializationProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ZERO_LENGTH_ENUM_ARRAY", "[Ljava/lang/Enum;", "[Ljava/lang/Enum<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(EnumSet$SerializationProxy, ZERO_LENGTH_ENUM_ARRAY)},
		{"elementType", "Ljava/lang/Class;", "Ljava/lang/Class<TE;>;", $PRIVATE | $FINAL, $field(EnumSet$SerializationProxy, elementType)},
		{"elements", "[Ljava/lang/Enum;", "[Ljava/lang/Enum<*>;", $PRIVATE | $FINAL, $field(EnumSet$SerializationProxy, elements)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EnumSet$SerializationProxy, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/EnumSet;)V", "(Ljava/util/EnumSet<TE;>;)V", 0, $method(EnumSet$SerializationProxy, init$, void, $EnumSet*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(EnumSet$SerializationProxy, readResolve, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.EnumSet$SerializationProxy", "java.util.EnumSet", "SerializationProxy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.EnumSet$SerializationProxy",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Enum<TE;>;>Ljava/lang/Object;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.EnumSet"
	};
	$loadClass(EnumSet$SerializationProxy, name, initialize, &classInfo$$, EnumSet$SerializationProxy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EnumSet$SerializationProxy);
	});
	return class$;
}

$Class* EnumSet$SerializationProxy::class$ = nullptr;

	} // util
} // java
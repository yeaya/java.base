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

$FieldInfo _EnumSet$SerializationProxy_FieldInfo_[] = {
	{"ZERO_LENGTH_ENUM_ARRAY", "[Ljava/lang/Enum;", "[Ljava/lang/Enum<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(EnumSet$SerializationProxy, ZERO_LENGTH_ENUM_ARRAY)},
	{"elementType", "Ljava/lang/Class;", "Ljava/lang/Class<TE;>;", $PRIVATE | $FINAL, $field(EnumSet$SerializationProxy, elementType)},
	{"elements", "[Ljava/lang/Enum;", "[Ljava/lang/Enum<*>;", $PRIVATE | $FINAL, $field(EnumSet$SerializationProxy, elements)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EnumSet$SerializationProxy, serialVersionUID)},
	{}
};

$MethodInfo _EnumSet$SerializationProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/util/EnumSet;)V", "(Ljava/util/EnumSet<TE;>;)V", 0, $method(EnumSet$SerializationProxy, init$, void, $EnumSet*)},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(EnumSet$SerializationProxy, readResolve, $Object*)},
	{}
};

$InnerClassInfo _EnumSet$SerializationProxy_InnerClassesInfo_[] = {
	{"java.util.EnumSet$SerializationProxy", "java.util.EnumSet", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EnumSet$SerializationProxy_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.EnumSet$SerializationProxy",
	"java.lang.Object",
	"java.io.Serializable",
	_EnumSet$SerializationProxy_FieldInfo_,
	_EnumSet$SerializationProxy_MethodInfo_,
	"<E:Ljava/lang/Enum<TE;>;>Ljava/lang/Object;Ljava/io/Serializable;",
	nullptr,
	_EnumSet$SerializationProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.EnumSet"
};

$Object* allocate$EnumSet$SerializationProxy($Class* clazz) {
	return $of($alloc(EnumSet$SerializationProxy));
}

$EnumArray* EnumSet$SerializationProxy::ZERO_LENGTH_ENUM_ARRAY = nullptr;

void EnumSet$SerializationProxy::init$($EnumSet* set) {
	$set(this, elementType, $nc(set)->elementType);
	$set(this, elements, $fcast($EnumArray, set->toArray(EnumSet$SerializationProxy::ZERO_LENGTH_ENUM_ARRAY)));
}

$Object* EnumSet$SerializationProxy::readResolve() {
	$useLocalCurrentObjectStackCache();
	$var($EnumSet, result, $EnumSet::noneOf(this->elementType));
	{
		$var($EnumArray, arr$, this->elements);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Enum, e, arr$->get(i$));
			$nc(result)->add(e);
		}
	}
	return $of(result);
}

void clinit$EnumSet$SerializationProxy($Class* class$) {
	$assignStatic(EnumSet$SerializationProxy::ZERO_LENGTH_ENUM_ARRAY, $new($EnumArray, 0));
}

EnumSet$SerializationProxy::EnumSet$SerializationProxy() {
}

$Class* EnumSet$SerializationProxy::load$($String* name, bool initialize) {
	$loadClass(EnumSet$SerializationProxy, name, initialize, &_EnumSet$SerializationProxy_ClassInfo_, clinit$EnumSet$SerializationProxy, allocate$EnumSet$SerializationProxy);
	return class$;
}

$Class* EnumSet$SerializationProxy::class$ = nullptr;

	} // util
} // java
#include <jdk/internal/loader/AbstractClassLoaderValue$Sub.h>

#include <java/util/Objects.h>
#include <jdk/internal/loader/AbstractClassLoaderValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $AbstractClassLoaderValue = ::jdk::internal::loader::AbstractClassLoaderValue;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _AbstractClassLoaderValue$Sub_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/AbstractClassLoaderValue;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractClassLoaderValue$Sub, this$0)},
	{"key", "Ljava/lang/Object;", "TK;", $PRIVATE | $FINAL, $field(AbstractClassLoaderValue$Sub, key$)},
	{}
};

$MethodInfo _AbstractClassLoaderValue$Sub_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/AbstractClassLoaderValue;Ljava/lang/Object;)V", "(TK;)V", 0, $method(static_cast<void(AbstractClassLoaderValue$Sub::*)($AbstractClassLoaderValue*,Object$*)>(&AbstractClassLoaderValue$Sub::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEqualOrDescendantOf", "(Ljdk/internal/loader/AbstractClassLoaderValue;)Z", "(Ljdk/internal/loader/AbstractClassLoaderValue<*TV;>;)Z", $PUBLIC},
	{"key", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"parent", "()Ljdk/internal/loader/AbstractClassLoaderValue;", "()Ljdk/internal/loader/AbstractClassLoaderValue<TCLV;TV;>;", $PUBLIC, $method(static_cast<$AbstractClassLoaderValue*(AbstractClassLoaderValue$Sub::*)()>(&AbstractClassLoaderValue$Sub::parent))},
	{}
};

$InnerClassInfo _AbstractClassLoaderValue$Sub_InnerClassesInfo_[] = {
	{"jdk.internal.loader.AbstractClassLoaderValue$Sub", "jdk.internal.loader.AbstractClassLoaderValue", "Sub", $PUBLIC | $FINAL},
	{}
};

$ClassInfo _AbstractClassLoaderValue$Sub_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.loader.AbstractClassLoaderValue$Sub",
	"jdk.internal.loader.AbstractClassLoaderValue",
	nullptr,
	_AbstractClassLoaderValue$Sub_FieldInfo_,
	_AbstractClassLoaderValue$Sub_MethodInfo_,
	"<K:Ljava/lang/Object;>Ljdk/internal/loader/AbstractClassLoaderValue<Ljdk/internal/loader/AbstractClassLoaderValue<TCLV;TV;>.Sub<TK;>;TV;>;",
	nullptr,
	_AbstractClassLoaderValue$Sub_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.AbstractClassLoaderValue"
};

$Object* allocate$AbstractClassLoaderValue$Sub($Class* clazz) {
	return $of($alloc(AbstractClassLoaderValue$Sub));
}

void AbstractClassLoaderValue$Sub::init$($AbstractClassLoaderValue* this$0, Object$* key) {
	$set(this, this$0, this$0);
	$AbstractClassLoaderValue::init$();
	$set(this, key$, key);
}

$AbstractClassLoaderValue* AbstractClassLoaderValue$Sub::parent() {
	return this->this$0;
}

$Object* AbstractClassLoaderValue$Sub::key() {
	return $of(this->key$);
}

bool AbstractClassLoaderValue$Sub::isEqualOrDescendantOf($AbstractClassLoaderValue* clv) {
	bool var$0 = equals($Objects::requireNonNull(clv));
	return var$0 || $nc($(parent()))->isEqualOrDescendantOf(clv);
}

bool AbstractClassLoaderValue$Sub::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(AbstractClassLoaderValue$Sub, o))) {
		return false;
	}
	$var(AbstractClassLoaderValue$Sub, that, $cast(AbstractClassLoaderValue$Sub, o));
	bool var$0 = $nc($of($(this->parent())))->equals($($nc(that)->parent()));
	return var$0 && $Objects::equals(this->key$, $nc(that)->key$);
}

int32_t AbstractClassLoaderValue$Sub::hashCode() {
	int32_t var$0 = 31 * $nc($of($(parent())))->hashCode();
	return var$0 + $Objects::hashCode(this->key$);
}

AbstractClassLoaderValue$Sub::AbstractClassLoaderValue$Sub() {
}

$Class* AbstractClassLoaderValue$Sub::load$($String* name, bool initialize) {
	$loadClass(AbstractClassLoaderValue$Sub, name, initialize, &_AbstractClassLoaderValue$Sub_ClassInfo_, allocate$AbstractClassLoaderValue$Sub);
	return class$;
}

$Class* AbstractClassLoaderValue$Sub::class$ = nullptr;

		} // loader
	} // internal
} // jdk
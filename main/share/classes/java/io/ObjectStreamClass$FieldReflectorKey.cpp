#include <java/io/ObjectStreamClass$FieldReflectorKey.h>
#include <java/io/ObjectStreamClass.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace io {

void ObjectStreamClass$FieldReflectorKey::init$($Class* cl, $ObjectStreamFieldArray* fields, $ReferenceQueue* queue) {
	$useLocalObjectStack();
	$WeakReference::init$(cl, queue);
	this->nullClass = (cl == nullptr);
	$set(this, sigs, $new($StringArray, 2 * $nc(fields)->length));
	for (int32_t i = 0, j = 0; i < fields->length; ++i) {
		$var($ObjectStreamField, f, fields->get(i));
		this->sigs->set(j++, $($nc(f)->getName()));
		this->sigs->set(j++, $(f->getSignature()));
	}
	int32_t var$0 = $System::identityHashCode(cl);
	this->hash = var$0 + $Arrays::hashCode(this->sigs);
}

int32_t ObjectStreamClass$FieldReflectorKey::hashCode() {
	return this->hash;
}

bool ObjectStreamClass$FieldReflectorKey::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	{
		$var(ObjectStreamClass$FieldReflectorKey, other, nullptr);
		bool var$0 = $instanceOf(ObjectStreamClass$FieldReflectorKey, obj);
		if (var$0) {
			$assign(other, $cast(ObjectStreamClass$FieldReflectorKey, obj));
			var$0 = true;
		}
		if (var$0) {
			$Class* referent = nullptr;
			bool var$2 = false;
			if (this->nullClass) {
				var$2 = $nc(other)->nullClass;
			} else {
				bool var$3 = (referent = $cast($Class, get())) != nullptr;
				var$2 = var$3 && ($nc(other)->refersTo(referent));
			}
			bool var$1 = var$2;
			return var$1 && $Arrays::equals(this->sigs, $nc(other)->sigs);
		} else {
			return false;
		}
	}
}

ObjectStreamClass$FieldReflectorKey::ObjectStreamClass$FieldReflectorKey() {
}

$Class* ObjectStreamClass$FieldReflectorKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sigs", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$FieldReflectorKey, sigs)},
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$FieldReflectorKey, hash)},
		{"nullClass", "Z", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$FieldReflectorKey, nullClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;[Ljava/io/ObjectStreamField;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Class<*>;[Ljava/io/ObjectStreamField;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;)V", 0, $method(ObjectStreamClass$FieldReflectorKey, init$, void, $Class*, $ObjectStreamFieldArray*, $ReferenceQueue*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ObjectStreamClass$FieldReflectorKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ObjectStreamClass$FieldReflectorKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectStreamClass$FieldReflectorKey", "java.io.ObjectStreamClass", "FieldReflectorKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectStreamClass$FieldReflectorKey",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectStreamClass"
	};
	$loadClass(ObjectStreamClass$FieldReflectorKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamClass$FieldReflectorKey);
	});
	return class$;
}

$Class* ObjectStreamClass$FieldReflectorKey::class$ = nullptr;

	} // io
} // java
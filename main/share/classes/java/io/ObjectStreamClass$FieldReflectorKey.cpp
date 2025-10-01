#include <java/io/ObjectStreamClass$FieldReflectorKey.h>

#include <java/io/ObjectStreamClass.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$FieldReflectorKey_FieldInfo_[] = {
	{"sigs", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$FieldReflectorKey, sigs)},
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$FieldReflectorKey, hash)},
	{"nullClass", "Z", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$FieldReflectorKey, nullClass)},
	{}
};

$MethodInfo _ObjectStreamClass$FieldReflectorKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/io/ObjectStreamField;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Class<*>;[Ljava/io/ObjectStreamField;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;)V", 0, $method(static_cast<void(ObjectStreamClass$FieldReflectorKey::*)($Class*,$ObjectStreamFieldArray*,$ReferenceQueue*)>(&ObjectStreamClass$FieldReflectorKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectStreamClass$FieldReflectorKey_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$FieldReflectorKey", "java.io.ObjectStreamClass", "FieldReflectorKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectStreamClass$FieldReflectorKey_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$FieldReflectorKey",
	"java.lang.ref.WeakReference",
	nullptr,
	_ObjectStreamClass$FieldReflectorKey_FieldInfo_,
	_ObjectStreamClass$FieldReflectorKey_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;",
	nullptr,
	_ObjectStreamClass$FieldReflectorKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$FieldReflectorKey($Class* clazz) {
	return $of($alloc(ObjectStreamClass$FieldReflectorKey));
}

void ObjectStreamClass$FieldReflectorKey::init$($Class* cl, $ObjectStreamFieldArray* fields, $ReferenceQueue* queue) {
	$WeakReference::init$(cl, queue);
	this->nullClass = (cl == nullptr);
	$set(this, sigs, $new($StringArray, 2 * $nc(fields)->length));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < fields->length; ++i) {
			$var($ObjectStreamField, f, fields->get(i));
			$nc(this->sigs)->set(j++, $($nc(f)->getName()));
			$nc(this->sigs)->set(j++, $(f->getSignature()));
		}
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
				bool var$3 = ((referent = $cast($Class, get())) != nullptr);
				var$2 = var$3 && (other->refersTo(referent));
			}
			bool var$1 = (var$2);
			return var$1 && $Arrays::equals(this->sigs, other->sigs);
		} else {
			return false;
		}
	}
}

ObjectStreamClass$FieldReflectorKey::ObjectStreamClass$FieldReflectorKey() {
}

$Class* ObjectStreamClass$FieldReflectorKey::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$FieldReflectorKey, name, initialize, &_ObjectStreamClass$FieldReflectorKey_ClassInfo_, allocate$ObjectStreamClass$FieldReflectorKey);
	return class$;
}

$Class* ObjectStreamClass$FieldReflectorKey::class$ = nullptr;

	} // io
} // java
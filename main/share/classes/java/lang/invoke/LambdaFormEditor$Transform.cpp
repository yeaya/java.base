#include <java/lang/invoke/LambdaFormEditor$Transform.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/LambdaFormEditor$TransformKey.h>
#include <java/lang/invoke/LambdaFormEditor.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaFormEditor = ::java::lang::invoke::LambdaFormEditor;
using $LambdaFormEditor$TransformKey = ::java::lang::invoke::LambdaFormEditor$TransformKey;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace lang {
		namespace invoke {

bool LambdaFormEditor$Transform::$assertionsDisabled = false;

void LambdaFormEditor$Transform::init$(int64_t packedBytes, $bytes* fullBytes, $LambdaForm* result) {
	$SoftReference::init$(result);
	this->packedBytes = packedBytes;
	$set(this, fullBytes, fullBytes);
}

bool LambdaFormEditor$Transform::equals(Object$* obj) {
	if ($instanceOf($LambdaFormEditor$TransformKey, obj)) {
		return equals($cast($LambdaFormEditor$TransformKey, obj));
	}
	return $instanceOf(LambdaFormEditor$Transform, obj) && equals($cast(LambdaFormEditor$Transform, obj));
}

bool LambdaFormEditor$Transform::equals($LambdaFormEditor$TransformKey* that) {
	return this->packedBytes == $nc(that)->packedBytes$ && $Arrays::equals(this->fullBytes, that->fullBytes$);
}

bool LambdaFormEditor$Transform::equals(LambdaFormEditor$Transform* that) {
	return this->packedBytes == $nc(that)->packedBytes && $Arrays::equals(this->fullBytes, that->fullBytes);
}

int32_t LambdaFormEditor$Transform::hashCode() {
	if (this->packedBytes != 0) {
		if (!LambdaFormEditor$Transform::$assertionsDisabled && !(this->fullBytes == nullptr)) {
			$throwNew($AssertionError);
		}
		return $Long::hashCode(this->packedBytes);
	}
	return $Arrays::hashCode(this->fullBytes);
}

$String* LambdaFormEditor$Transform::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append($($$new($LambdaFormEditor$TransformKey, this->packedBytes, this->fullBytes)->toString()));
	$var($LambdaForm, result, $cast($LambdaForm, get()));
	if (result != nullptr) {
		buf->append(" result="_s);
		buf->append(result);
	}
	return buf->toString();
}

void LambdaFormEditor$Transform::clinit$($Class* clazz) {
	$load($LambdaFormEditor);
	LambdaFormEditor$Transform::$assertionsDisabled = !$LambdaFormEditor::class$->desiredAssertionStatus();
}

LambdaFormEditor$Transform::LambdaFormEditor$Transform() {
}

$Class* LambdaFormEditor$Transform::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaFormEditor$Transform, $assertionsDisabled)},
		{"packedBytes", "J", nullptr, $FINAL, $field(LambdaFormEditor$Transform, packedBytes)},
		{"fullBytes", "[B", nullptr, $FINAL, $field(LambdaFormEditor$Transform, fullBytes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J[BLjava/lang/invoke/LambdaForm;)V", nullptr, $PRIVATE, $method(LambdaFormEditor$Transform, init$, void, int64_t, $bytes*, $LambdaForm*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LambdaFormEditor$Transform, equals, bool, Object$*)},
		{"equals", "(Ljava/lang/invoke/LambdaFormEditor$TransformKey;)Z", nullptr, $PRIVATE, $method(LambdaFormEditor$Transform, equals, bool, $LambdaFormEditor$TransformKey*)},
		{"equals", "(Ljava/lang/invoke/LambdaFormEditor$Transform;)Z", nullptr, $PRIVATE, $method(LambdaFormEditor$Transform, equals, bool, LambdaFormEditor$Transform*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(LambdaFormEditor$Transform, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LambdaFormEditor$Transform, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.LambdaFormEditor$Transform", "java.lang.invoke.LambdaFormEditor", "Transform", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.LambdaFormEditor$Transform",
		"java.lang.ref.SoftReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/SoftReference<Ljava/lang/invoke/LambdaForm;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.LambdaFormEditor"
	};
	$loadClass(LambdaFormEditor$Transform, name, initialize, &classInfo$$, LambdaFormEditor$Transform::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaFormEditor$Transform);
	});
	return class$;
}

$Class* LambdaFormEditor$Transform::class$ = nullptr;

		} // invoke
	} // lang
} // java
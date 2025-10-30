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

$FieldInfo _LambdaFormEditor$Transform_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaFormEditor$Transform, $assertionsDisabled)},
	{"packedBytes", "J", nullptr, $FINAL, $field(LambdaFormEditor$Transform, packedBytes)},
	{"fullBytes", "[B", nullptr, $FINAL, $field(LambdaFormEditor$Transform, fullBytes)},
	{}
};

$MethodInfo _LambdaFormEditor$Transform_MethodInfo_[] = {
	{"<init>", "(J[BLjava/lang/invoke/LambdaForm;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormEditor$Transform::*)(int64_t,$bytes*,$LambdaForm*)>(&LambdaFormEditor$Transform::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/invoke/LambdaFormEditor$TransformKey;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaFormEditor$Transform::*)($LambdaFormEditor$TransformKey*)>(&LambdaFormEditor$Transform::equals))},
	{"equals", "(Ljava/lang/invoke/LambdaFormEditor$Transform;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaFormEditor$Transform::*)(LambdaFormEditor$Transform*)>(&LambdaFormEditor$Transform::equals))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LambdaFormEditor$Transform_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaFormEditor$Transform", "java.lang.invoke.LambdaFormEditor", "Transform", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _LambdaFormEditor$Transform_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.LambdaFormEditor$Transform",
	"java.lang.ref.SoftReference",
	nullptr,
	_LambdaFormEditor$Transform_FieldInfo_,
	_LambdaFormEditor$Transform_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/lang/invoke/LambdaForm;>;",
	nullptr,
	_LambdaFormEditor$Transform_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaFormEditor"
};

$Object* allocate$LambdaFormEditor$Transform($Class* clazz) {
	return $of($alloc(LambdaFormEditor$Transform));
}

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
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append($($$new($LambdaFormEditor$TransformKey, this->packedBytes, this->fullBytes)->toString()));
	$var($LambdaForm, result, $cast($LambdaForm, get()));
	if (result != nullptr) {
		buf->append(" result="_s);
		buf->append($of(result));
	}
	return buf->toString();
}

void clinit$LambdaFormEditor$Transform($Class* class$) {
	$load($LambdaFormEditor);
	LambdaFormEditor$Transform::$assertionsDisabled = !$LambdaFormEditor::class$->desiredAssertionStatus();
}

LambdaFormEditor$Transform::LambdaFormEditor$Transform() {
}

$Class* LambdaFormEditor$Transform::load$($String* name, bool initialize) {
	$loadClass(LambdaFormEditor$Transform, name, initialize, &_LambdaFormEditor$Transform_ClassInfo_, clinit$LambdaFormEditor$Transform, allocate$LambdaFormEditor$Transform);
	return class$;
}

$Class* LambdaFormEditor$Transform::class$ = nullptr;

		} // invoke
	} // lang
} // java
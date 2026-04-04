#include <java/io/ObjectOutputStream$PutFieldImpl.h>
#include <java/io/Bits.h>
#include <java/io/IOException.h>
#include <java/io/ObjectOutput.h>
#include <java/io/ObjectOutputStream$BlockDataOutputStream.h>
#include <java/io/ObjectOutputStream$DebugTraceInfoStack.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/io/ObjectStreamField.h>
#include <jcpp.h>

#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $Bits = ::java::io::Bits;
using $IOException = ::java::io::IOException;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace java {
	namespace io {

void ObjectOutputStream$PutFieldImpl::init$($ObjectOutputStream* this$0, $ObjectStreamClass* desc) {
	$set(this, this$0, this$0);
	$ObjectOutputStream$PutField::init$();
	$set(this, desc, desc);
	$set(this, primVals, $new($bytes, $nc(desc)->getPrimDataSize()));
	$set(this, objVals, $new($ObjectArray, desc->getNumObjFields()));
}

void ObjectOutputStream$PutFieldImpl::put($String* name, bool val) {
	$Bits::putBoolean(this->primVals, getFieldOffset(name, $Boolean::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, int8_t val) {
	this->primVals->set(getFieldOffset(name, $Byte::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, char16_t val) {
	$Bits::putChar(this->primVals, getFieldOffset(name, $Character::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, int16_t val) {
	$Bits::putShort(this->primVals, getFieldOffset(name, $Short::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, int32_t val) {
	$Bits::putInt(this->primVals, getFieldOffset(name, $Integer::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, float val) {
	$Bits::putFloat(this->primVals, getFieldOffset(name, $Float::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, int64_t val) {
	$Bits::putLong(this->primVals, getFieldOffset(name, $Long::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, double val) {
	$Bits::putDouble(this->primVals, getFieldOffset(name, $Double::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, Object$* val) {
	this->objVals->set(getFieldOffset(name, $Object::class$), val);
}

void ObjectOutputStream$PutFieldImpl::write($ObjectOutput* out) {
	if (!$equals(this->this$0, out)) {
		$throwNew($IllegalArgumentException, "wrong stream"_s);
	}
	$nc(out)->write(this->primVals, 0, this->primVals->length);
	$var($ObjectStreamFieldArray, fields, $nc(this->desc)->getFields(false));
	int32_t numPrimFields = $nc(fields)->length - this->objVals->length;
	for (int32_t i = 0; i < this->objVals->length; ++i) {
		if ($nc(fields->get(numPrimFields + i))->isUnshared()) {
			$throwNew($IOException, "cannot write unshared object"_s);
		}
		out->writeObject(this->objVals->get(i));
	}
}

void ObjectOutputStream$PutFieldImpl::writeFields() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$nc(this->this$0->bout)->write(this->primVals, 0, this->primVals->length, false);
	$var($ObjectStreamFieldArray, fields, $nc(this->desc)->getFields(false));
	int32_t numPrimFields = $nc(fields)->length - this->objVals->length;
	for (int32_t i = 0; i < this->objVals->length; ++i) {
		if ($ObjectOutputStream::extendedDebugInfo) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("field (class \""_s);
			var$0->append($(this->desc->getName()));
			var$0->append("\", name: \""_s);
			var$0->append($($nc(fields->get(numPrimFields + i))->getName()));
			var$0->append("\", type: \""_s);
			var$0->append($nc(fields->get(numPrimFields + i))->getType());
			var$0->append("\")"_s);
			$nc(this->this$0->debugInfoStack)->push($$str(var$0));
		}
		$var($Throwable, var$1, nullptr);
		try {
			this->this$0->writeObject0(this->objVals->get(i), $nc(fields->get(numPrimFields + i))->isUnshared());
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			if ($ObjectOutputStream::extendedDebugInfo) {
				$nc(this->this$0->debugInfoStack)->pop();
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

int32_t ObjectOutputStream$PutFieldImpl::getFieldOffset($String* name, $Class* type) {
	$useLocalObjectStack();
	$var($ObjectStreamField, field, $nc(this->desc)->getField(name, type));
	if (field == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"no such field "_s, name, " with type "_s, type}));
	}
	return $nc(field)->getOffset();
}

ObjectOutputStream$PutFieldImpl::ObjectOutputStream$PutFieldImpl() {
}

$Class* ObjectOutputStream$PutFieldImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/ObjectOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectOutputStream$PutFieldImpl, this$0)},
		{"desc", "Ljava/io/ObjectStreamClass;", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$PutFieldImpl, desc)},
		{"primVals", "[B", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$PutFieldImpl, primVals)},
		{"objVals", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$PutFieldImpl, objVals)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectOutputStream;Ljava/io/ObjectStreamClass;)V", nullptr, 0, $method(ObjectOutputStream$PutFieldImpl, init$, void, $ObjectOutputStream*, $ObjectStreamClass*)},
		{"getFieldOffset", "(Ljava/lang/String;Ljava/lang/Class;)I", "(Ljava/lang/String;Ljava/lang/Class<*>;)I", $PRIVATE, $method(ObjectOutputStream$PutFieldImpl, getFieldOffset, int32_t, $String*, $Class*)},
		{"put", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, bool)},
		{"put", "(Ljava/lang/String;B)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, int8_t)},
		{"put", "(Ljava/lang/String;C)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, char16_t)},
		{"put", "(Ljava/lang/String;S)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, int16_t)},
		{"put", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, int32_t)},
		{"put", "(Ljava/lang/String;F)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, float)},
		{"put", "(Ljava/lang/String;J)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, int64_t)},
		{"put", "(Ljava/lang/String;D)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, double)},
		{"put", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, put, void, $String*, Object$*)},
		{"write", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$PutFieldImpl, write, void, $ObjectOutput*), "java.io.IOException"},
		{"writeFields", "()V", nullptr, 0, $virtualMethod(ObjectOutputStream$PutFieldImpl, writeFields, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectOutputStream$PutFieldImpl", "java.io.ObjectOutputStream", "PutFieldImpl", $PRIVATE},
		{"java.io.ObjectOutputStream$PutField", "java.io.ObjectOutputStream", "PutField", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectOutputStream$PutFieldImpl",
		"java.io.ObjectOutputStream$PutField",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectOutputStream"
	};
	$loadClass(ObjectOutputStream$PutFieldImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectOutputStream$PutFieldImpl);
	});
	return class$;
}

$Class* ObjectOutputStream$PutFieldImpl::class$ = nullptr;

	} // io
} // java
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
using $ObjectOutputStream$BlockDataOutputStream = ::java::io::ObjectOutputStream$BlockDataOutputStream;
using $ObjectOutputStream$DebugTraceInfoStack = ::java::io::ObjectOutputStream$DebugTraceInfoStack;
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

$FieldInfo _ObjectOutputStream$PutFieldImpl_FieldInfo_[] = {
	{"this$0", "Ljava/io/ObjectOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectOutputStream$PutFieldImpl, this$0)},
	{"desc", "Ljava/io/ObjectStreamClass;", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$PutFieldImpl, desc)},
	{"primVals", "[B", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$PutFieldImpl, primVals)},
	{"objVals", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$PutFieldImpl, objVals)},
	{}
};

$MethodInfo _ObjectOutputStream$PutFieldImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectOutputStream;Ljava/io/ObjectStreamClass;)V", nullptr, 0, $method(static_cast<void(ObjectOutputStream$PutFieldImpl::*)($ObjectOutputStream*,$ObjectStreamClass*)>(&ObjectOutputStream$PutFieldImpl::init$))},
	{"getFieldOffset", "(Ljava/lang/String;Ljava/lang/Class;)I", "(Ljava/lang/String;Ljava/lang/Class<*>;)I", $PRIVATE, $method(static_cast<int32_t(ObjectOutputStream$PutFieldImpl::*)($String*,$Class*)>(&ObjectOutputStream$PutFieldImpl::getFieldOffset))},
	{"put", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;B)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;C)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;S)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;F)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;J)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;D)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"write", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeFields", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ObjectOutputStream$PutFieldImpl_InnerClassesInfo_[] = {
	{"java.io.ObjectOutputStream$PutFieldImpl", "java.io.ObjectOutputStream", "PutFieldImpl", $PRIVATE},
	{"java.io.ObjectOutputStream$PutField", "java.io.ObjectOutputStream", "PutField", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjectOutputStream$PutFieldImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectOutputStream$PutFieldImpl",
	"java.io.ObjectOutputStream$PutField",
	nullptr,
	_ObjectOutputStream$PutFieldImpl_FieldInfo_,
	_ObjectOutputStream$PutFieldImpl_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectOutputStream$PutFieldImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectOutputStream"
};

$Object* allocate$ObjectOutputStream$PutFieldImpl($Class* clazz) {
	return $of($alloc(ObjectOutputStream$PutFieldImpl));
}

void ObjectOutputStream$PutFieldImpl::init$($ObjectOutputStream* this$0, $ObjectStreamClass* desc) {
	$set(this, this$0, this$0);
	$ObjectOutputStream$PutField::init$();
	$set(this, desc, desc);
	$set(this, primVals, $new($bytes, $nc(desc)->getPrimDataSize()));
	$set(this, objVals, $new($ObjectArray, desc->getNumObjFields()));
}

void ObjectOutputStream$PutFieldImpl::put($String* name, bool val) {
	$init($Boolean);
	$Bits::putBoolean(this->primVals, getFieldOffset(name, $Boolean::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, int8_t val) {
	$init($Byte);
	$nc(this->primVals)->set(getFieldOffset(name, $Byte::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, char16_t val) {
	$init($Character);
	$Bits::putChar(this->primVals, getFieldOffset(name, $Character::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, int16_t val) {
	$init($Short);
	$Bits::putShort(this->primVals, getFieldOffset(name, $Short::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, int32_t val) {
	$init($Integer);
	$Bits::putInt(this->primVals, getFieldOffset(name, $Integer::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, float val) {
	$init($Float);
	$Bits::putFloat(this->primVals, getFieldOffset(name, $Float::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, int64_t val) {
	$init($Long);
	$Bits::putLong(this->primVals, getFieldOffset(name, $Long::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, double val) {
	$init($Double);
	$Bits::putDouble(this->primVals, getFieldOffset(name, $Double::TYPE), val);
}

void ObjectOutputStream$PutFieldImpl::put($String* name, Object$* val) {
	$nc(this->objVals)->set(getFieldOffset(name, $Object::class$), val);
}

void ObjectOutputStream$PutFieldImpl::write($ObjectOutput* out) {
	if (!$equals(this->this$0, out)) {
		$throwNew($IllegalArgumentException, "wrong stream"_s);
	}
	$nc(out)->write(this->primVals, 0, $nc(this->primVals)->length);
	$var($ObjectStreamFieldArray, fields, $nc(this->desc)->getFields(false));
	int32_t numPrimFields = $nc(fields)->length - $nc(this->objVals)->length;
	for (int32_t i = 0; i < $nc(this->objVals)->length; ++i) {
		if ($nc(fields->get(numPrimFields + i))->isUnshared()) {
			$throwNew($IOException, "cannot write unshared object"_s);
		}
		out->writeObject($nc(this->objVals)->get(i));
	}
}

void ObjectOutputStream$PutFieldImpl::writeFields() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc(this->this$0->bout)->write(this->primVals, 0, $nc(this->primVals)->length, false);
	$var($ObjectStreamFieldArray, fields, $nc(this->desc)->getFields(false));
	int32_t numPrimFields = $nc(fields)->length - $nc(this->objVals)->length;
	for (int32_t i = 0; i < $nc(this->objVals)->length; ++i) {
		$init($ObjectOutputStream);
		if ($ObjectOutputStream::extendedDebugInfo) {
			$var($String, var$3, $$str({"field (class \""_s, $($nc(this->desc)->getName()), "\", name: \""_s}));
			$var($String, var$2, $$concat(var$3, $($nc(fields->get(numPrimFields + i))->getName())));
			$var($String, var$1, $$concat(var$2, "\", type: \""_s));
			$var($String, var$0, $$concat(var$1, $($nc(fields->get(numPrimFields + i))->getType())));
			$nc(this->this$0->debugInfoStack)->push($$concat(var$0, "\")"_s));
		}
		{
			$var($Throwable, var$4, nullptr);
			try {
				this->this$0->writeObject0($nc(this->objVals)->get(i), $nc(fields->get(numPrimFields + i))->isUnshared());
			} catch ($Throwable& var$5) {
				$assign(var$4, var$5);
			} /*finally*/ {
				if ($ObjectOutputStream::extendedDebugInfo) {
					$nc(this->this$0->debugInfoStack)->pop();
				}
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
		}
	}
}

int32_t ObjectOutputStream$PutFieldImpl::getFieldOffset($String* name, $Class* type) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectStreamField, field, $nc(this->desc)->getField(name, type));
	if (field == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"no such field "_s, name, " with type "_s, type}));
	}
	return $nc(field)->getOffset();
}

ObjectOutputStream$PutFieldImpl::ObjectOutputStream$PutFieldImpl() {
}

$Class* ObjectOutputStream$PutFieldImpl::load$($String* name, bool initialize) {
	$loadClass(ObjectOutputStream$PutFieldImpl, name, initialize, &_ObjectOutputStream$PutFieldImpl_ClassInfo_, allocate$ObjectOutputStream$PutFieldImpl);
	return class$;
}

$Class* ObjectOutputStream$PutFieldImpl::class$ = nullptr;

	} // io
} // java
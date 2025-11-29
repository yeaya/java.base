#include <java/time/zone/Ser.h>

#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidClassException.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <java/io/Serializable.h>
#include <java/io/StreamCorruptedException.h>
#include <java/time/ZoneOffset.h>
#include <java/time/zone/ZoneOffsetTransition.h>
#include <java/time/zone/ZoneOffsetTransitionRule.h>
#include <java/time/zone/ZoneRules.h>
#include <jcpp.h>

#undef ZOT
#undef ZOTRULE
#undef ZRULES

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidClassException = ::java::io::InvalidClassException;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectOutput = ::java::io::ObjectOutput;
using $Serializable = ::java::io::Serializable;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ZoneOffsetTransition = ::java::time::zone::ZoneOffsetTransition;
using $ZoneOffsetTransitionRule = ::java::time::zone::ZoneOffsetTransitionRule;
using $ZoneRules = ::java::time::zone::ZoneRules;

namespace java {
	namespace time {
		namespace zone {

$FieldInfo _Ser_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Ser, serialVersionUID)},
	{"ZRULES", "B", nullptr, $STATIC | $FINAL, $constField(Ser, ZRULES)},
	{"ZOT", "B", nullptr, $STATIC | $FINAL, $constField(Ser, ZOT)},
	{"ZOTRULE", "B", nullptr, $STATIC | $FINAL, $constField(Ser, ZOTRULE)},
	{"type", "B", nullptr, $PRIVATE, $field(Ser, type)},
	{"object", "Ljava/io/Serializable;", nullptr, $PRIVATE, $field(Ser, object)},
	{}
};

$MethodInfo _Ser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Ser::*)()>(&Ser::init$))},
	{"<init>", "(BLjava/io/Serializable;)V", nullptr, 0, $method(static_cast<void(Ser::*)(int8_t,$Serializable*)>(&Ser::init$))},
	{"read", "(Ljava/io/DataInput;)Ljava/io/Serializable;", nullptr, $STATIC, $method(static_cast<$Serializable*(*)($DataInput*)>(&Ser::read)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readEpochSec", "(Ljava/io/DataInput;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($DataInput*)>(&Ser::readEpochSec)), "java.io.IOException"},
	{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readInternal", "(BLjava/io/DataInput;)Ljava/io/Serializable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Serializable*(*)(int8_t,$DataInput*)>(&Ser::readInternal)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readOffset", "(Ljava/io/DataInput;)Ljava/time/ZoneOffset;", nullptr, $STATIC, $method(static_cast<$ZoneOffset*(*)($DataInput*)>(&Ser::readOffset)), "java.io.IOException"},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Ser::*)()>(&Ser::readResolve))},
	{"write", "(Ljava/lang/Object;Ljava/io/DataOutput;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*,$DataOutput*)>(&Ser::write)), "java.io.IOException"},
	{"writeEpochSec", "(JLjava/io/DataOutput;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$DataOutput*)>(&Ser::writeEpochSec)), "java.io.IOException"},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeInternal", "(BLjava/lang/Object;Ljava/io/DataOutput;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int8_t,Object$*,$DataOutput*)>(&Ser::writeInternal)), "java.io.IOException"},
	{"writeOffset", "(Ljava/time/ZoneOffset;Ljava/io/DataOutput;)V", nullptr, $STATIC, $method(static_cast<void(*)($ZoneOffset*,$DataOutput*)>(&Ser::writeOffset)), "java.io.IOException"},
	{}
};

$ClassInfo _Ser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.zone.Ser",
	"java.lang.Object",
	"java.io.Externalizable",
	_Ser_FieldInfo_,
	_Ser_MethodInfo_
};

$Object* allocate$Ser($Class* clazz) {
	return $of($alloc(Ser));
}

void Ser::init$() {
}

void Ser::init$(int8_t type, $Serializable* object) {
	this->type = type;
	$set(this, object, object);
}

void Ser::writeExternal($ObjectOutput* out) {
	writeInternal(this->type, this->object, out);
}

void Ser::write(Object$* object, $DataOutput* out) {
	$init(Ser);
	writeInternal(Ser::ZRULES, object, out);
}

void Ser::writeInternal(int8_t type, Object$* object, $DataOutput* out) {
	$init(Ser);
	$nc(out)->writeByte(type);
	switch (type) {
	case Ser::ZRULES:
		{
			$nc(($cast($ZoneRules, object)))->writeExternal(out);
			break;
		}
	case Ser::ZOT:
		{
			$nc(($cast($ZoneOffsetTransition, object)))->writeExternal(out);
			break;
		}
	case Ser::ZOTRULE:
		{
			$nc(($cast($ZoneOffsetTransitionRule, object)))->writeExternal(out);
			break;
		}
	default:
		{
			$throwNew($InvalidClassException, "Unknown serialized type"_s);
		}
	}
}

void Ser::readExternal($ObjectInput* in) {
	this->type = $nc(in)->readByte();
	$set(this, object, readInternal(this->type, in));
}

$Serializable* Ser::read($DataInput* in) {
	$init(Ser);
	int8_t type = $nc(in)->readByte();
	return readInternal(type, in);
}

$Serializable* Ser::readInternal(int8_t type, $DataInput* in) {
	$init(Ser);
	switch (type) {
	case Ser::ZRULES:
		{
			return $ZoneRules::readExternal(in);
		}
	case Ser::ZOT:
		{
			return $ZoneOffsetTransition::readExternal(in);
		}
	case Ser::ZOTRULE:
		{
			return $ZoneOffsetTransitionRule::readExternal(in);
		}
	default:
		{
			$throwNew($StreamCorruptedException, "Unknown serialized type"_s);
		}
	}
}

$Object* Ser::readResolve() {
	return $of(this->object);
}

void Ser::writeOffset($ZoneOffset* offset, $DataOutput* out) {
	$init(Ser);
	int32_t offsetSecs = $nc(offset)->getTotalSeconds();
	int32_t offsetByte = offsetSecs % 900 == 0 ? offsetSecs / 900 : 127;
	$nc(out)->writeByte(offsetByte);
	if (offsetByte == 127) {
		out->writeInt(offsetSecs);
	}
}

$ZoneOffset* Ser::readOffset($DataInput* in) {
	$init(Ser);
	int32_t offsetByte = $nc(in)->readByte();
	return (offsetByte == 127 ? $ZoneOffset::ofTotalSeconds(in->readInt()) : $ZoneOffset::ofTotalSeconds(offsetByte * 900));
}

void Ser::writeEpochSec(int64_t epochSec, $DataOutput* out) {
	$init(Ser);
	if (epochSec >= (int64_t)0xFFFFFFFEEF43B000 && epochSec < (int64_t)0x000000026CB5DB00 && epochSec % 900 == 0) {
		int32_t store = (int32_t)((epochSec + (int64_t)0x0000000110BC5000) / 900);
		$nc(out)->writeByte((int32_t)(((int32_t)((uint32_t)store >> 16)) & (uint32_t)255));
		out->writeByte((int32_t)(((int32_t)((uint32_t)store >> 8)) & (uint32_t)255));
		out->writeByte((int32_t)(store & (uint32_t)255));
	} else {
		$nc(out)->writeByte(255);
		out->writeLong(epochSec);
	}
}

int64_t Ser::readEpochSec($DataInput* in) {
	$init(Ser);
	int32_t hiByte = (int32_t)($nc(in)->readByte() & (uint32_t)255);
	if (hiByte == 255) {
		return in->readLong();
	} else {
		int32_t midByte = (int32_t)(in->readByte() & (uint32_t)255);
		int32_t loByte = (int32_t)(in->readByte() & (uint32_t)255);
		int64_t tot = ((hiByte << 16) + (midByte << 8) + loByte);
		return (tot * 900) - (int64_t)0x0000000110BC5000;
	}
}

Ser::Ser() {
}

$Class* Ser::load$($String* name, bool initialize) {
	$loadClass(Ser, name, initialize, &_Ser_ClassInfo_, allocate$Ser);
	return class$;
}

$Class* Ser::class$ = nullptr;

		} // zone
	} // time
} // java
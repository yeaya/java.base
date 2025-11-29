#include <sun/nio/fs/AbstractPoller$RequestType.h>

#include <java/lang/Enum.h>
#include <sun/nio/fs/AbstractPoller.h>
#include <jcpp.h>

#undef CANCEL
#undef CLOSE
#undef REGISTER

using $AbstractPoller$RequestTypeArray = $Array<::sun::nio::fs::AbstractPoller$RequestType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _AbstractPoller$RequestType_FieldInfo_[] = {
	{"REGISTER", "Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractPoller$RequestType, REGISTER)},
	{"CANCEL", "Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractPoller$RequestType, CANCEL)},
	{"CLOSE", "Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractPoller$RequestType, CLOSE)},
	{"$VALUES", "[Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractPoller$RequestType, $VALUES)},
	{}
};

$MethodInfo _AbstractPoller$RequestType_MethodInfo_[] = {
	{"$values", "()[Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AbstractPoller$RequestTypeArray*(*)()>(&AbstractPoller$RequestType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(AbstractPoller$RequestType::*)($String*,int32_t)>(&AbstractPoller$RequestType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AbstractPoller$RequestType*(*)($String*)>(&AbstractPoller$RequestType::valueOf))},
	{"values", "()[Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AbstractPoller$RequestTypeArray*(*)()>(&AbstractPoller$RequestType::values))},
	{}
};

$InnerClassInfo _AbstractPoller$RequestType_InnerClassesInfo_[] = {
	{"sun.nio.fs.AbstractPoller$RequestType", "sun.nio.fs.AbstractPoller", "RequestType", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AbstractPoller$RequestType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.nio.fs.AbstractPoller$RequestType",
	"java.lang.Enum",
	nullptr,
	_AbstractPoller$RequestType_FieldInfo_,
	_AbstractPoller$RequestType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/nio/fs/AbstractPoller$RequestType;>;",
	nullptr,
	_AbstractPoller$RequestType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.AbstractPoller"
};

$Object* allocate$AbstractPoller$RequestType($Class* clazz) {
	return $of($alloc(AbstractPoller$RequestType));
}

AbstractPoller$RequestType* AbstractPoller$RequestType::REGISTER = nullptr;
AbstractPoller$RequestType* AbstractPoller$RequestType::CANCEL = nullptr;
AbstractPoller$RequestType* AbstractPoller$RequestType::CLOSE = nullptr;
$AbstractPoller$RequestTypeArray* AbstractPoller$RequestType::$VALUES = nullptr;

$AbstractPoller$RequestTypeArray* AbstractPoller$RequestType::$values() {
	$init(AbstractPoller$RequestType);
	return $new($AbstractPoller$RequestTypeArray, {
		AbstractPoller$RequestType::REGISTER,
		AbstractPoller$RequestType::CANCEL,
		AbstractPoller$RequestType::CLOSE
	});
}

$AbstractPoller$RequestTypeArray* AbstractPoller$RequestType::values() {
	$init(AbstractPoller$RequestType);
	return $cast($AbstractPoller$RequestTypeArray, AbstractPoller$RequestType::$VALUES->clone());
}

AbstractPoller$RequestType* AbstractPoller$RequestType::valueOf($String* name) {
	$init(AbstractPoller$RequestType);
	return $cast(AbstractPoller$RequestType, $Enum::valueOf(AbstractPoller$RequestType::class$, name));
}

void AbstractPoller$RequestType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AbstractPoller$RequestType($Class* class$) {
	$assignStatic(AbstractPoller$RequestType::REGISTER, $new(AbstractPoller$RequestType, "REGISTER"_s, 0));
	$assignStatic(AbstractPoller$RequestType::CANCEL, $new(AbstractPoller$RequestType, "CANCEL"_s, 1));
	$assignStatic(AbstractPoller$RequestType::CLOSE, $new(AbstractPoller$RequestType, "CLOSE"_s, 2));
	$assignStatic(AbstractPoller$RequestType::$VALUES, AbstractPoller$RequestType::$values());
}

AbstractPoller$RequestType::AbstractPoller$RequestType() {
}

$Class* AbstractPoller$RequestType::load$($String* name, bool initialize) {
	$loadClass(AbstractPoller$RequestType, name, initialize, &_AbstractPoller$RequestType_ClassInfo_, clinit$AbstractPoller$RequestType, allocate$AbstractPoller$RequestType);
	return class$;
}

$Class* AbstractPoller$RequestType::class$ = nullptr;

		} // fs
	} // nio
} // sun
#include <java/nio/file/StandardCopyOption.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ATOMIC_MOVE
#undef COPY_ATTRIBUTES
#undef REPLACE_EXISTING

using $StandardCopyOptionArray = $Array<::java::nio::file::StandardCopyOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CopyOption = ::java::nio::file::CopyOption;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _StandardCopyOption_FieldInfo_[] = {
	{"REPLACE_EXISTING", "Ljava/nio/file/StandardCopyOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardCopyOption, REPLACE_EXISTING)},
	{"COPY_ATTRIBUTES", "Ljava/nio/file/StandardCopyOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardCopyOption, COPY_ATTRIBUTES)},
	{"ATOMIC_MOVE", "Ljava/nio/file/StandardCopyOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardCopyOption, ATOMIC_MOVE)},
	{"$VALUES", "[Ljava/nio/file/StandardCopyOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StandardCopyOption, $VALUES)},
	{}
};

$MethodInfo _StandardCopyOption_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/StandardCopyOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StandardCopyOptionArray*(*)()>(&StandardCopyOption::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StandardCopyOption::*)($String*,int32_t)>(&StandardCopyOption::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/StandardCopyOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StandardCopyOption*(*)($String*)>(&StandardCopyOption::valueOf))},
	{"values", "()[Ljava/nio/file/StandardCopyOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StandardCopyOptionArray*(*)()>(&StandardCopyOption::values))},
	{}
};

$ClassInfo _StandardCopyOption_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.StandardCopyOption",
	"java.lang.Enum",
	"java.nio.file.CopyOption",
	_StandardCopyOption_FieldInfo_,
	_StandardCopyOption_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/StandardCopyOption;>;Ljava/nio/file/CopyOption;"
};

$Object* allocate$StandardCopyOption($Class* clazz) {
	return $of($alloc(StandardCopyOption));
}

$String* StandardCopyOption::toString() {
	 return this->$Enum::toString();
}

bool StandardCopyOption::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t StandardCopyOption::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* StandardCopyOption::clone() {
	 return this->$Enum::clone();
}

void StandardCopyOption::finalize() {
	this->$Enum::finalize();
}

StandardCopyOption* StandardCopyOption::REPLACE_EXISTING = nullptr;
StandardCopyOption* StandardCopyOption::COPY_ATTRIBUTES = nullptr;
StandardCopyOption* StandardCopyOption::ATOMIC_MOVE = nullptr;
$StandardCopyOptionArray* StandardCopyOption::$VALUES = nullptr;

$StandardCopyOptionArray* StandardCopyOption::$values() {
	$init(StandardCopyOption);
	return $new($StandardCopyOptionArray, {
		StandardCopyOption::REPLACE_EXISTING,
		StandardCopyOption::COPY_ATTRIBUTES,
		StandardCopyOption::ATOMIC_MOVE
	});
}

$StandardCopyOptionArray* StandardCopyOption::values() {
	$init(StandardCopyOption);
	return $cast($StandardCopyOptionArray, StandardCopyOption::$VALUES->clone());
}

StandardCopyOption* StandardCopyOption::valueOf($String* name) {
	$init(StandardCopyOption);
	return $cast(StandardCopyOption, $Enum::valueOf(StandardCopyOption::class$, name));
}

void StandardCopyOption::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StandardCopyOption($Class* class$) {
	$assignStatic(StandardCopyOption::REPLACE_EXISTING, $new(StandardCopyOption, "REPLACE_EXISTING"_s, 0));
	$assignStatic(StandardCopyOption::COPY_ATTRIBUTES, $new(StandardCopyOption, "COPY_ATTRIBUTES"_s, 1));
	$assignStatic(StandardCopyOption::ATOMIC_MOVE, $new(StandardCopyOption, "ATOMIC_MOVE"_s, 2));
	$assignStatic(StandardCopyOption::$VALUES, StandardCopyOption::$values());
}

StandardCopyOption::StandardCopyOption() {
}

$Class* StandardCopyOption::load$($String* name, bool initialize) {
	$loadClass(StandardCopyOption, name, initialize, &_StandardCopyOption_ClassInfo_, clinit$StandardCopyOption, allocate$StandardCopyOption);
	return class$;
}

$Class* StandardCopyOption::class$ = nullptr;

		} // file
	} // nio
} // java
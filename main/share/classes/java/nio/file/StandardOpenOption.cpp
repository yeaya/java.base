#include <java/nio/file/StandardOpenOption.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef APPEND
#undef CREATE
#undef CREATE_NEW
#undef DELETE_ON_CLOSE
#undef DSYNC
#undef READ
#undef SPARSE
#undef SYNC
#undef TRUNCATE_EXISTING
#undef WRITE

using $StandardOpenOptionArray = $Array<::java::nio::file::StandardOpenOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _StandardOpenOption_FieldInfo_[] = {
	{"READ", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, READ)},
	{"WRITE", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, WRITE)},
	{"APPEND", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, APPEND)},
	{"TRUNCATE_EXISTING", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, TRUNCATE_EXISTING)},
	{"CREATE", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, CREATE)},
	{"CREATE_NEW", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, CREATE_NEW)},
	{"DELETE_ON_CLOSE", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, DELETE_ON_CLOSE)},
	{"SPARSE", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, SPARSE)},
	{"SYNC", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, SYNC)},
	{"DSYNC", "Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardOpenOption, DSYNC)},
	{"$VALUES", "[Ljava/nio/file/StandardOpenOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StandardOpenOption, $VALUES)},
	{}
};

$MethodInfo _StandardOpenOption_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/StandardOpenOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StandardOpenOptionArray*(*)()>(&StandardOpenOption::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StandardOpenOption::*)($String*,int32_t)>(&StandardOpenOption::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StandardOpenOption*(*)($String*)>(&StandardOpenOption::valueOf))},
	{"values", "()[Ljava/nio/file/StandardOpenOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StandardOpenOptionArray*(*)()>(&StandardOpenOption::values))},
	{}
};

$ClassInfo _StandardOpenOption_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.StandardOpenOption",
	"java.lang.Enum",
	"java.nio.file.OpenOption",
	_StandardOpenOption_FieldInfo_,
	_StandardOpenOption_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/StandardOpenOption;>;Ljava/nio/file/OpenOption;"
};

$Object* allocate$StandardOpenOption($Class* clazz) {
	return $of($alloc(StandardOpenOption));
}

$String* StandardOpenOption::toString() {
	 return this->$Enum::toString();
}

bool StandardOpenOption::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t StandardOpenOption::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* StandardOpenOption::clone() {
	 return this->$Enum::clone();
}

void StandardOpenOption::finalize() {
	this->$Enum::finalize();
}

StandardOpenOption* StandardOpenOption::READ = nullptr;
StandardOpenOption* StandardOpenOption::WRITE = nullptr;
StandardOpenOption* StandardOpenOption::APPEND = nullptr;
StandardOpenOption* StandardOpenOption::TRUNCATE_EXISTING = nullptr;
StandardOpenOption* StandardOpenOption::CREATE = nullptr;
StandardOpenOption* StandardOpenOption::CREATE_NEW = nullptr;
StandardOpenOption* StandardOpenOption::DELETE_ON_CLOSE = nullptr;
StandardOpenOption* StandardOpenOption::SPARSE = nullptr;
StandardOpenOption* StandardOpenOption::SYNC = nullptr;
StandardOpenOption* StandardOpenOption::DSYNC = nullptr;
$StandardOpenOptionArray* StandardOpenOption::$VALUES = nullptr;

$StandardOpenOptionArray* StandardOpenOption::$values() {
	$init(StandardOpenOption);
	return $new($StandardOpenOptionArray, {
		StandardOpenOption::READ,
		StandardOpenOption::WRITE,
		StandardOpenOption::APPEND,
		StandardOpenOption::TRUNCATE_EXISTING,
		StandardOpenOption::CREATE,
		StandardOpenOption::CREATE_NEW,
		StandardOpenOption::DELETE_ON_CLOSE,
		StandardOpenOption::SPARSE,
		StandardOpenOption::SYNC,
		StandardOpenOption::DSYNC
	});
}

$StandardOpenOptionArray* StandardOpenOption::values() {
	$init(StandardOpenOption);
	return $cast($StandardOpenOptionArray, StandardOpenOption::$VALUES->clone());
}

StandardOpenOption* StandardOpenOption::valueOf($String* name) {
	$init(StandardOpenOption);
	return $cast(StandardOpenOption, $Enum::valueOf(StandardOpenOption::class$, name));
}

void StandardOpenOption::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StandardOpenOption($Class* class$) {
	$assignStatic(StandardOpenOption::READ, $new(StandardOpenOption, "READ"_s, 0));
	$assignStatic(StandardOpenOption::WRITE, $new(StandardOpenOption, "WRITE"_s, 1));
	$assignStatic(StandardOpenOption::APPEND, $new(StandardOpenOption, "APPEND"_s, 2));
	$assignStatic(StandardOpenOption::TRUNCATE_EXISTING, $new(StandardOpenOption, "TRUNCATE_EXISTING"_s, 3));
	$assignStatic(StandardOpenOption::CREATE, $new(StandardOpenOption, "CREATE"_s, 4));
	$assignStatic(StandardOpenOption::CREATE_NEW, $new(StandardOpenOption, "CREATE_NEW"_s, 5));
	$assignStatic(StandardOpenOption::DELETE_ON_CLOSE, $new(StandardOpenOption, "DELETE_ON_CLOSE"_s, 6));
	$assignStatic(StandardOpenOption::SPARSE, $new(StandardOpenOption, "SPARSE"_s, 7));
	$assignStatic(StandardOpenOption::SYNC, $new(StandardOpenOption, "SYNC"_s, 8));
	$assignStatic(StandardOpenOption::DSYNC, $new(StandardOpenOption, "DSYNC"_s, 9));
	$assignStatic(StandardOpenOption::$VALUES, StandardOpenOption::$values());
}

StandardOpenOption::StandardOpenOption() {
}

$Class* StandardOpenOption::load$($String* name, bool initialize) {
	$loadClass(StandardOpenOption, name, initialize, &_StandardOpenOption_ClassInfo_, clinit$StandardOpenOption, allocate$StandardOpenOption);
	return class$;
}

$Class* StandardOpenOption::class$ = nullptr;

		} // file
	} // nio
} // java
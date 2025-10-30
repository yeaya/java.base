#include <java/nio/file/LinkOption.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NOFOLLOW_LINKS

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CopyOption = ::java::nio::file::CopyOption;
using $OpenOption = ::java::nio::file::OpenOption;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _LinkOption_FieldInfo_[] = {
	{"NOFOLLOW_LINKS", "Ljava/nio/file/LinkOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LinkOption, NOFOLLOW_LINKS)},
	{"$VALUES", "[Ljava/nio/file/LinkOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LinkOption, $VALUES)},
	{}
};

$MethodInfo _LinkOption_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/LinkOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LinkOptionArray*(*)()>(&LinkOption::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(LinkOption::*)($String*,int32_t)>(&LinkOption::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/LinkOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LinkOption*(*)($String*)>(&LinkOption::valueOf))},
	{"values", "()[Ljava/nio/file/LinkOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LinkOptionArray*(*)()>(&LinkOption::values))},
	{}
};

$ClassInfo _LinkOption_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.LinkOption",
	"java.lang.Enum",
	"java.nio.file.OpenOption,java.nio.file.CopyOption",
	_LinkOption_FieldInfo_,
	_LinkOption_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/LinkOption;>;Ljava/nio/file/OpenOption;Ljava/nio/file/CopyOption;"
};

$Object* allocate$LinkOption($Class* clazz) {
	return $of($alloc(LinkOption));
}

$String* LinkOption::toString() {
	 return this->$Enum::toString();
}

bool LinkOption::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t LinkOption::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* LinkOption::clone() {
	 return this->$Enum::clone();
}

void LinkOption::finalize() {
	this->$Enum::finalize();
}

LinkOption* LinkOption::NOFOLLOW_LINKS = nullptr;
$LinkOptionArray* LinkOption::$VALUES = nullptr;

$LinkOptionArray* LinkOption::$values() {
	$init(LinkOption);
	return $new($LinkOptionArray, {LinkOption::NOFOLLOW_LINKS});
}

$LinkOptionArray* LinkOption::values() {
	$init(LinkOption);
	return $cast($LinkOptionArray, LinkOption::$VALUES->clone());
}

LinkOption* LinkOption::valueOf($String* name) {
	$init(LinkOption);
	return $cast(LinkOption, $Enum::valueOf(LinkOption::class$, name));
}

void LinkOption::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$LinkOption($Class* class$) {
	$assignStatic(LinkOption::NOFOLLOW_LINKS, $new(LinkOption, "NOFOLLOW_LINKS"_s, 0));
	$assignStatic(LinkOption::$VALUES, LinkOption::$values());
}

LinkOption::LinkOption() {
}

$Class* LinkOption::load$($String* name, bool initialize) {
	$loadClass(LinkOption, name, initialize, &_LinkOption_ClassInfo_, clinit$LinkOption, allocate$LinkOption);
	return class$;
}

$Class* LinkOption::class$ = nullptr;

		} // file
	} // nio
} // java
#include <java/nio/file/LinkOption.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NOFOLLOW_LINKS

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

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

void LinkOption::clinit$($Class* clazz) {
	$assignStatic(LinkOption::NOFOLLOW_LINKS, $new(LinkOption, "NOFOLLOW_LINKS"_s, 0));
	$assignStatic(LinkOption::$VALUES, LinkOption::$values());
}

LinkOption::LinkOption() {
}

$Class* LinkOption::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOFOLLOW_LINKS", "Ljava/nio/file/LinkOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LinkOption, NOFOLLOW_LINKS)},
		{"$VALUES", "[Ljava/nio/file/LinkOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LinkOption, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/nio/file/LinkOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LinkOption, $values, $LinkOptionArray*)},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(LinkOption, init$, void, $String*, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/LinkOption;", nullptr, $PUBLIC | $STATIC, $staticMethod(LinkOption, valueOf, LinkOption*, $String*)},
		{"values", "()[Ljava/nio/file/LinkOption;", nullptr, $PUBLIC | $STATIC, $staticMethod(LinkOption, values, $LinkOptionArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.nio.file.LinkOption",
		"java.lang.Enum",
		"java.nio.file.OpenOption,java.nio.file.CopyOption",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/nio/file/LinkOption;>;Ljava/nio/file/OpenOption;Ljava/nio/file/CopyOption;"
	};
	$loadClass(LinkOption, name, initialize, &classInfo$$, LinkOption::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LinkOption));
	});
	return class$;
}

$Class* LinkOption::class$ = nullptr;

		} // file
	} // nio
} // java
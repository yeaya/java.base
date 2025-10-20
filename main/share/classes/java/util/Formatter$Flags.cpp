#include <java/util/Formatter$Flags.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/DuplicateFormatFlagsException.h>
#include <java/util/Formatter.h>
#include <java/util/UnknownFormatFlagsException.h>
#include <jcpp.h>

#undef ALTERNATE
#undef GROUP
#undef LEADING_SPACE
#undef LEFT_JUSTIFY
#undef NONE
#undef PARENTHESES
#undef PLUS
#undef PREVIOUS
#undef UPPERCASE
#undef ZERO_PAD

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DuplicateFormatFlagsException = ::java::util::DuplicateFormatFlagsException;
using $Formatter = ::java::util::Formatter;
using $UnknownFormatFlagsException = ::java::util::UnknownFormatFlagsException;

namespace java {
	namespace util {

$FieldInfo _Formatter$Flags_FieldInfo_[] = {
	{"flags", "I", nullptr, $PRIVATE, $field(Formatter$Flags, flags)},
	{"NONE", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, NONE)},
	{"LEFT_JUSTIFY", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, LEFT_JUSTIFY)},
	{"UPPERCASE", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, UPPERCASE)},
	{"ALTERNATE", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, ALTERNATE)},
	{"PLUS", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, PLUS)},
	{"LEADING_SPACE", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, LEADING_SPACE)},
	{"ZERO_PAD", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, ZERO_PAD)},
	{"GROUP", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, GROUP)},
	{"PARENTHESES", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, PARENTHESES)},
	{"PREVIOUS", "Ljava/util/Formatter$Flags;", nullptr, $STATIC | $FINAL, $staticField(Formatter$Flags, PREVIOUS)},
	{}
};

$MethodInfo _Formatter$Flags_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Formatter$Flags::*)(int32_t)>(&Formatter$Flags::init$))},
	{"add", "(Ljava/util/Formatter$Flags;)Ljava/util/Formatter$Flags;", nullptr, $PRIVATE, $method(static_cast<Formatter$Flags*(Formatter$Flags::*)(Formatter$Flags*)>(&Formatter$Flags::add))},
	{"contains", "(Ljava/util/Formatter$Flags;)Z", nullptr, $PUBLIC},
	{"dup", "()Ljava/util/Formatter$Flags;", nullptr, $PUBLIC},
	{"parse", "(Ljava/lang/String;II)Ljava/util/Formatter$Flags;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Formatter$Flags*(*)($String*,int32_t,int32_t)>(&Formatter$Flags::parse))},
	{"parse", "(C)Ljava/util/Formatter$Flags;", nullptr, $PRIVATE | $STATIC, $method(static_cast<Formatter$Flags*(*)(char16_t)>(&Formatter$Flags::parse))},
	{"remove", "(Ljava/util/Formatter$Flags;)Ljava/util/Formatter$Flags;", nullptr, $PUBLIC},
	{"toString", "(Ljava/util/Formatter$Flags;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Formatter$Flags*)>(&Formatter$Flags::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Formatter$Flags_InnerClassesInfo_[] = {
	{"java.util.Formatter$Flags", "java.util.Formatter", "Flags", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Formatter$Flags_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Formatter$Flags",
	"java.lang.Object",
	nullptr,
	_Formatter$Flags_FieldInfo_,
	_Formatter$Flags_MethodInfo_,
	nullptr,
	nullptr,
	_Formatter$Flags_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Formatter"
};

$Object* allocate$Formatter$Flags($Class* clazz) {
	return $of($alloc(Formatter$Flags));
}

Formatter$Flags* Formatter$Flags::NONE = nullptr;
Formatter$Flags* Formatter$Flags::LEFT_JUSTIFY = nullptr;
Formatter$Flags* Formatter$Flags::UPPERCASE = nullptr;
Formatter$Flags* Formatter$Flags::ALTERNATE = nullptr;
Formatter$Flags* Formatter$Flags::PLUS = nullptr;
Formatter$Flags* Formatter$Flags::LEADING_SPACE = nullptr;
Formatter$Flags* Formatter$Flags::ZERO_PAD = nullptr;
Formatter$Flags* Formatter$Flags::GROUP = nullptr;
Formatter$Flags* Formatter$Flags::PARENTHESES = nullptr;
Formatter$Flags* Formatter$Flags::PREVIOUS = nullptr;

void Formatter$Flags::init$(int32_t f) {
	this->flags = f;
}

int32_t Formatter$Flags::valueOf() {
	return this->flags;
}

bool Formatter$Flags::contains(Formatter$Flags* f) {
	int32_t var$0 = ((int32_t)(this->flags & (uint32_t)$nc(f)->valueOf()));
	return var$0 == f->valueOf();
}

Formatter$Flags* Formatter$Flags::dup() {
	return $new(Formatter$Flags, this->flags);
}

Formatter$Flags* Formatter$Flags::add(Formatter$Flags* f) {
	this->flags |= $nc(f)->valueOf();
	return this;
}

Formatter$Flags* Formatter$Flags::remove(Formatter$Flags* f) {
	this->flags &= (uint32_t)~$nc(f)->valueOf();
	return this;
}

Formatter$Flags* Formatter$Flags::parse($String* s, int32_t start, int32_t end) {
	$init(Formatter$Flags);
	$useLocalCurrentObjectStackCache();
	$var(Formatter$Flags, f, $new(Formatter$Flags, 0));
	for (int32_t i = start; i < end; ++i) {
		char16_t c = $nc(s)->charAt(i);
		$var(Formatter$Flags, v, parse(c));
		if (f->contains(v)) {
			$throwNew($DuplicateFormatFlagsException, $($nc(v)->toString()));
		}
		f->add(v);
	}
	return f;
}

Formatter$Flags* Formatter$Flags::parse(char16_t c) {
	$init(Formatter$Flags);
	$useLocalCurrentObjectStackCache();

	$var(Formatter$Flags, var$0, nullptr)
	switch (c) {
	case u'-':
		{
			$assign(var$0, Formatter$Flags::LEFT_JUSTIFY);
			break;
		}
	case u'#':
		{
			$assign(var$0, Formatter$Flags::ALTERNATE);
			break;
		}
	case u'+':
		{
			$assign(var$0, Formatter$Flags::PLUS);
			break;
		}
	case u' ':
		{
			$assign(var$0, Formatter$Flags::LEADING_SPACE);
			break;
		}
	case u'0':
		{
			$assign(var$0, Formatter$Flags::ZERO_PAD);
			break;
		}
	case u',':
		{
			$assign(var$0, Formatter$Flags::GROUP);
			break;
		}
	case u'(':
		{
			$assign(var$0, Formatter$Flags::PARENTHESES);
			break;
		}
	case u'<':
		{
			$assign(var$0, Formatter$Flags::PREVIOUS);
			break;
		}
	default:
		{
			$throwNew($UnknownFormatFlagsException, $($String::valueOf(c)));
		}
	}
	return var$0;
}

$String* Formatter$Flags::toString(Formatter$Flags* f) {
	$init(Formatter$Flags);
	return $nc(f)->toString();
}

$String* Formatter$Flags::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	if (contains(Formatter$Flags::LEFT_JUSTIFY)) {
		sb->append(u'-');
	}
	if (contains(Formatter$Flags::UPPERCASE)) {
		sb->append(u'^');
	}
	if (contains(Formatter$Flags::ALTERNATE)) {
		sb->append(u'#');
	}
	if (contains(Formatter$Flags::PLUS)) {
		sb->append(u'+');
	}
	if (contains(Formatter$Flags::LEADING_SPACE)) {
		sb->append(u' ');
	}
	if (contains(Formatter$Flags::ZERO_PAD)) {
		sb->append(u'0');
	}
	if (contains(Formatter$Flags::GROUP)) {
		sb->append(u',');
	}
	if (contains(Formatter$Flags::PARENTHESES)) {
		sb->append(u'(');
	}
	if (contains(Formatter$Flags::PREVIOUS)) {
		sb->append(u'<');
	}
	return sb->toString();
}

void clinit$Formatter$Flags($Class* class$) {
	$assignStatic(Formatter$Flags::NONE, $new(Formatter$Flags, 0));
	$assignStatic(Formatter$Flags::LEFT_JUSTIFY, $new(Formatter$Flags, 1 << 0));
	$assignStatic(Formatter$Flags::UPPERCASE, $new(Formatter$Flags, 1 << 1));
	$assignStatic(Formatter$Flags::ALTERNATE, $new(Formatter$Flags, 1 << 2));
	$assignStatic(Formatter$Flags::PLUS, $new(Formatter$Flags, 1 << 3));
	$assignStatic(Formatter$Flags::LEADING_SPACE, $new(Formatter$Flags, 1 << 4));
	$assignStatic(Formatter$Flags::ZERO_PAD, $new(Formatter$Flags, 1 << 5));
	$assignStatic(Formatter$Flags::GROUP, $new(Formatter$Flags, 1 << 6));
	$assignStatic(Formatter$Flags::PARENTHESES, $new(Formatter$Flags, 1 << 7));
	$assignStatic(Formatter$Flags::PREVIOUS, $new(Formatter$Flags, 1 << 8));
}

Formatter$Flags::Formatter$Flags() {
}

$Class* Formatter$Flags::load$($String* name, bool initialize) {
	$loadClass(Formatter$Flags, name, initialize, &_Formatter$Flags_ClassInfo_, clinit$Formatter$Flags, allocate$Formatter$Flags);
	return class$;
}

$Class* Formatter$Flags::class$ = nullptr;

	} // util
} // java
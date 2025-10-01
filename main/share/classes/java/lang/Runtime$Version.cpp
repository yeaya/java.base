#include <java/lang/Runtime$Version.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runtime$VersionPattern.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef VSTR_PATTERN
#undef OPT_GROUP
#undef PLUS_GROUP
#undef VNUM_GROUP
#undef BUILD_GROUP
#undef PRE_GROUP

using $IntegerArray = $Array<::java::lang::Integer>;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runtime = ::java::lang::Runtime;
using $Runtime$VersionPattern = ::java::lang::Runtime$VersionPattern;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BigInteger = ::java::math::BigInteger;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {

class Runtime$Version$$Lambda$toString : public $Function {
	$class(Runtime$Version$$Lambda$toString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($of($nc(inst$))->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Runtime$Version$$Lambda$toString>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Runtime$Version$$Lambda$toString::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Runtime$Version$$Lambda$toString::*)()>(&Runtime$Version$$Lambda$toString::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Runtime$Version$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.Runtime$Version$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Runtime$Version$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(Runtime$Version$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Runtime$Version$$Lambda$toString::class$ = nullptr;

class Runtime$Version$$Lambda$lambda$toString$0$1 : public $Consumer {
	$class(Runtime$Version$$Lambda$lambda$toString$0$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* v) override {
		Runtime$Version::lambda$toString$0(sb, $cast($String, v));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Runtime$Version$$Lambda$lambda$toString$0$1>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Runtime$Version$$Lambda$lambda$toString$0$1::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Runtime$Version$$Lambda$lambda$toString$0$1, sb)},
	{}
};
$MethodInfo Runtime$Version$$Lambda$lambda$toString$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Runtime$Version$$Lambda$lambda$toString$0$1::*)($StringBuilder*)>(&Runtime$Version$$Lambda$lambda$toString$0$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Runtime$Version$$Lambda$lambda$toString$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.Runtime$Version$$Lambda$lambda$toString$0$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Runtime$Version$$Lambda$lambda$toString$0$1::load$($String* name, bool initialize) {
	$loadClass(Runtime$Version$$Lambda$lambda$toString$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Runtime$Version$$Lambda$lambda$toString$0$1::class$ = nullptr;
$CompoundAttribute _Runtime$Version_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$NamedAttribute Runtime$Version_Attribute_var$0[] = {
	{"since", 's', "10"},
	{}
};

$CompoundAttribute _Runtime$Version_MethodAnnotations_major17[] = {
	{"Ljava/lang/Deprecated;", Runtime$Version_Attribute_var$0},
	{}
};

$NamedAttribute Runtime$Version_Attribute_var$1[] = {
	{"since", 's', "10"},
	{}
};

$CompoundAttribute _Runtime$Version_MethodAnnotations_minor18[] = {
	{"Ljava/lang/Deprecated;", Runtime$Version_Attribute_var$1},
	{}
};

$NamedAttribute Runtime$Version_Attribute_var$2[] = {
	{"since", 's', "10"},
	{}
};

$CompoundAttribute _Runtime$Version_MethodAnnotations_security23[] = {
	{"Ljava/lang/Deprecated;", Runtime$Version_Attribute_var$2},
	{}
};


$FieldInfo _Runtime$Version_FieldInfo_[] = {
	{"version", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(Runtime$Version, version$)},
	{"pre", "Ljava/util/Optional;", "Ljava/util/Optional<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(Runtime$Version, pre$)},
	{"build", "Ljava/util/Optional;", "Ljava/util/Optional<Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(Runtime$Version, build$)},
	{"optional", "Ljava/util/Optional;", "Ljava/util/Optional<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(Runtime$Version, optional$)},
	{}
};

$MethodInfo _Runtime$Version_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljava/util/Optional;Ljava/util/Optional;Ljava/util/Optional;)V", "(Ljava/util/List<Ljava/lang/Integer;>;Ljava/util/Optional<Ljava/lang/String;>;Ljava/util/Optional<Ljava/lang/Integer;>;Ljava/util/Optional<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(Runtime$Version::*)($List*,$Optional*,$Optional*,$Optional*)>(&Runtime$Version::init$))},
	{"build", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/Integer;>;", $PUBLIC, $method(static_cast<$Optional*(Runtime$Version::*)()>(&Runtime$Version::build))},
	{"compare", "(Ljava/lang/Runtime$Version;Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Runtime$Version::*)(Runtime$Version*,bool)>(&Runtime$Version::compare))},
	{"compareBuild", "(Ljava/lang/Runtime$Version;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Runtime$Version::*)(Runtime$Version*)>(&Runtime$Version::compareBuild))},
	{"compareOptional", "(Ljava/lang/Runtime$Version;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Runtime$Version::*)(Runtime$Version*)>(&Runtime$Version::compareOptional))},
	{"comparePre", "(Ljava/lang/Runtime$Version;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Runtime$Version::*)(Runtime$Version*)>(&Runtime$Version::comparePre))},
	{"compareTo", "(Ljava/lang/Runtime$Version;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Runtime$Version::*)(Runtime$Version*)>(&Runtime$Version::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"compareToIgnoreOptional", "(Ljava/lang/Runtime$Version;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Runtime$Version::*)(Runtime$Version*)>(&Runtime$Version::compareToIgnoreOptional))},
	{"compareVersion", "(Ljava/lang/Runtime$Version;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Runtime$Version::*)(Runtime$Version*)>(&Runtime$Version::compareVersion))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equalsIgnoreOptional", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Runtime$Version::*)(Object$*)>(&Runtime$Version::equalsIgnoreOptional))},
	{"feature", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Runtime$Version::*)()>(&Runtime$Version::feature))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"interim", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Runtime$Version::*)()>(&Runtime$Version::interim))},
	{"isSimpleNumber", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&Runtime$Version::isSimpleNumber))},
	{"lambda$toString$0", "(Ljava/lang/StringBuilder;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$String*)>(&Runtime$Version::lambda$toString$0))},
	{"major", "()I", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<int32_t(Runtime$Version::*)()>(&Runtime$Version::major)), nullptr, nullptr, _Runtime$Version_MethodAnnotations_major17},
	{"minor", "()I", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<int32_t(Runtime$Version::*)()>(&Runtime$Version::minor)), nullptr, nullptr, _Runtime$Version_MethodAnnotations_minor18},
	{"optional", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$Optional*(Runtime$Version::*)()>(&Runtime$Version::optional))},
	{"parse", "(Ljava/lang/String;)Ljava/lang/Runtime$Version;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Runtime$Version*(*)($String*)>(&Runtime$Version::parse))},
	{"patch", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Runtime$Version::*)()>(&Runtime$Version::patch))},
	{"pre", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$Optional*(Runtime$Version::*)()>(&Runtime$Version::pre))},
	{"security", "()I", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<int32_t(Runtime$Version::*)()>(&Runtime$Version::security)), nullptr, nullptr, _Runtime$Version_MethodAnnotations_security23},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Runtime$Version::*)()>(&Runtime$Version::update))},
	{"version", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Integer;>;", $PUBLIC, $method(static_cast<$List*(Runtime$Version::*)()>(&Runtime$Version::version))},
	{}
};

$InnerClassInfo _Runtime$Version_InnerClassesInfo_[] = {
	{"java.lang.Runtime$Version", "java.lang.Runtime", "Version", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Runtime$Version_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Runtime$Version",
	"java.lang.Object",
	"java.lang.Comparable",
	_Runtime$Version_FieldInfo_,
	_Runtime$Version_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/Runtime$Version;>;",
	nullptr,
	_Runtime$Version_InnerClassesInfo_,
	_Runtime$Version_Annotations_,
	nullptr,
	nullptr,
	"java.lang.Runtime"
};

$Object* allocate$Runtime$Version($Class* clazz) {
	return $of($alloc(Runtime$Version));
}

void Runtime$Version::init$($List* unmodifiableListOfVersions, $Optional* pre, $Optional* build, $Optional* optional) {
	$set(this, version$, unmodifiableListOfVersions);
	$set(this, pre$, pre);
	$set(this, build$, build);
	$set(this, optional$, optional);
}

Runtime$Version* Runtime$Version::parse($String* s) {
	$init(Runtime$Version);
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	if (isSimpleNumber(s)) {
		$var($List, var$0, $List::of($($of($Integer::valueOf($Integer::parseInt(s))))));
		$var($Optional, var$1, $Optional::empty());
		$var($Optional, var$2, $Optional::empty());
		return $new(Runtime$Version, var$0, var$1, var$2, $($Optional::empty()));
	}
	$init($Runtime$VersionPattern);
	$var($Matcher, m, $nc($Runtime$VersionPattern::VSTR_PATTERN)->matcher(s));
	if (!$nc(m)->matches()) {
		$throwNew($IllegalArgumentException, $$str({"Invalid version string: \'"_s, s, "\'"_s}));
	}
	$var($StringArray, split, $nc($($nc(m)->group($Runtime$VersionPattern::VNUM_GROUP)))->split("\\."_s));
	$var($IntegerArray, version, $new($IntegerArray, split->length));
	for (int32_t i = 0; i < split->length; ++i) {
		version->set(i, $($Integer::valueOf($Integer::parseInt(split->get(i)))));
	}
	$var($Optional, pre, $Optional::ofNullable($(m->group($Runtime$VersionPattern::PRE_GROUP))));
	$var($String, b, m->group($Runtime$VersionPattern::BUILD_GROUP));
	$var($Optional, build, (b == nullptr) ? $Optional::empty() : $Optional::of($($Integer::valueOf($Integer::parseInt(b)))));
	$var($Optional, optional, $Optional::ofNullable($(m->group($Runtime$VersionPattern::OPT_GROUP))));
	if (!$nc(build)->isPresent()) {
		if (m->group($Runtime$VersionPattern::PLUS_GROUP) != nullptr) {
			if ($nc(optional)->isPresent()) {
				if ($nc(pre)->isPresent()) {
					$throwNew($IllegalArgumentException, $$str({"\'+\' found with pre-release and optional components:\'"_s, s, "\'"_s}));
				}
			} else {
				$throwNew($IllegalArgumentException, $$str({"\'+\' found with neither build or optional components: \'"_s, s, "\'"_s}));
			}
		} else {
			bool var$4 = $nc(optional)->isPresent();
			if (var$4 && !$nc(pre)->isPresent()) {
				$throwNew($IllegalArgumentException, $$str({"optional component must be preceded by a pre-release component or \'+\': \'"_s, s, "\'"_s}));
			}
		}
	}
	return $new(Runtime$Version, $($List::of(version)), pre, build, optional);
}

bool Runtime$Version::isSimpleNumber($String* s) {
	$init(Runtime$Version);
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		char16_t c = s->charAt(i);
		char16_t lowerBound = (i > 0) ? u'0' : u'1';
		if (c < lowerBound || c > u'9') {
			return false;
		}
	}
	return true;
}

int32_t Runtime$Version::feature() {
	return $nc(($cast($Integer, $($nc(this->version$)->get(0)))))->intValue();
}

int32_t Runtime$Version::interim() {
	return ($nc(this->version$)->size() > 1 ? $nc(($cast($Integer, $($nc(this->version$)->get(1)))))->intValue() : 0);
}

int32_t Runtime$Version::update() {
	return ($nc(this->version$)->size() > 2 ? $nc(($cast($Integer, $($nc(this->version$)->get(2)))))->intValue() : 0);
}

int32_t Runtime$Version::patch() {
	return ($nc(this->version$)->size() > 3 ? $nc(($cast($Integer, $($nc(this->version$)->get(3)))))->intValue() : 0);
}

int32_t Runtime$Version::major() {
	return feature();
}

int32_t Runtime$Version::minor() {
	return interim();
}

int32_t Runtime$Version::security() {
	return update();
}

$List* Runtime$Version::version() {
	return this->version$;
}

$Optional* Runtime$Version::pre() {
	return this->pre$;
}

$Optional* Runtime$Version::build() {
	return this->build$;
}

$Optional* Runtime$Version::optional() {
	return this->optional$;
}

int32_t Runtime$Version::compareTo(Runtime$Version* obj) {
	return compare(obj, false);
}

int32_t Runtime$Version::compareToIgnoreOptional(Runtime$Version* obj) {
	return compare(obj, true);
}

int32_t Runtime$Version::compare(Runtime$Version* obj, bool ignoreOpt) {
	if (obj == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t ret = compareVersion(obj);
	if (ret != 0) {
		return ret;
	}
	ret = comparePre(obj);
	if (ret != 0) {
		return ret;
	}
	ret = compareBuild(obj);
	if (ret != 0) {
		return ret;
	}
	if (!ignoreOpt) {
		return compareOptional(obj);
	}
	return 0;
}

int32_t Runtime$Version::compareVersion(Runtime$Version* obj) {
	int32_t size = $nc(this->version$)->size();
	int32_t oSize = $nc($($nc(obj)->version()))->size();
	int32_t min = $Math::min(size, oSize);
	for (int32_t i = 0; i < min; ++i) {
		int32_t val = $nc(($cast($Integer, $($nc(this->version$)->get(i)))))->intValue();
		int32_t oVal = $nc(($cast($Integer, $($nc($(obj->version()))->get(i)))))->intValue();
		if (val != oVal) {
			return val - oVal;
		}
	}
	return size - oSize;
}

int32_t Runtime$Version::comparePre(Runtime$Version* obj) {
	$var($Optional, oPre, $nc(obj)->pre());
	if (!$nc(this->pre$)->isPresent()) {
		if ($nc(oPre)->isPresent()) {
			return 1;
		}
	} else {
		if (!$nc(oPre)->isPresent()) {
			return -1;
		}
		$var($String, val, $cast($String, $nc(this->pre$)->get()));
		$var($String, oVal, $cast($String, $nc(oPre)->get()));
		if ($nc(val)->matches("\\d+"_s)) {
			return ($nc(oVal)->matches("\\d+"_s) ? ($$new($BigInteger, val))->compareTo($$new($BigInteger, oVal)) : -1);
		} else {
			return ($nc(oVal)->matches("\\d+"_s) ? 1 : val->compareTo(oVal));
		}
	}
	return 0;
}

int32_t Runtime$Version::compareBuild(Runtime$Version* obj) {
	$var($Optional, oBuild, $nc(obj)->build());
	if ($nc(oBuild)->isPresent()) {
		return ($nc(this->build$)->isPresent() ? $nc(($cast($Integer, $($nc(this->build$)->get()))))->compareTo($cast($Integer, $(oBuild->get()))) : -1);
	} else if ($nc(this->build$)->isPresent()) {
		return 1;
	}
	return 0;
}

int32_t Runtime$Version::compareOptional(Runtime$Version* obj) {
	$var($Optional, oOpt, $nc(obj)->optional());
	if (!$nc(this->optional$)->isPresent()) {
		if ($nc(oOpt)->isPresent()) {
			return -1;
		}
	} else {
		if (!$nc(oOpt)->isPresent()) {
			return 1;
		}
		return $nc(($cast($String, $($nc(this->optional$)->get()))))->compareTo($cast($String, $($nc(oOpt)->get())));
	}
	return 0;
}

$String* Runtime$Version::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, $cast($String, $($nc($($nc($($nc(this->version$)->stream()))->map(static_cast<$Function*>($$new(Runtime$Version$$Lambda$toString)))))->collect($($Collectors::joining("."_s)))))));
	$nc(this->pre$)->ifPresent(static_cast<$Consumer*>($$new(Runtime$Version$$Lambda$lambda$toString$0$1, sb)));
	if ($nc(this->build$)->isPresent()) {
		sb->append("+"_s)->append($($nc(this->build$)->get()));
		if ($nc(this->optional$)->isPresent()) {
			sb->append("-"_s)->append($cast($String, $($nc(this->optional$)->get())));
		}
	} else if ($nc(this->optional$)->isPresent()) {
		$nc(sb)->append($nc(this->pre$)->isPresent() ? "-"_s : "+-"_s);
		sb->append($cast($String, $($nc(this->optional$)->get())));
	}
	return sb->toString();
}

bool Runtime$Version::equals(Object$* obj) {
	bool ret = equalsIgnoreOptional(obj);
	if (!ret) {
		return false;
	}
	$var(Runtime$Version, that, $cast(Runtime$Version, obj));
	return ($nc($(this->optional()))->equals($($nc(that)->optional())));
}

bool Runtime$Version::equalsIgnoreOptional(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(Runtime$Version, that, nullptr);
	bool var$1 = $instanceOf(Runtime$Version, obj);
	if (var$1) {
		$assign(that, $cast(Runtime$Version, obj));
		var$1 = true;
	}
	bool var$0 = (var$1);
	if (var$0) {
		bool var$3 = $nc($(this->version()))->equals($($nc(that)->version()));
		bool var$2 = var$3 && $nc($(this->pre()))->equals($($nc(that)->pre()));
		var$0 = (var$2 && $nc($(this->build()))->equals($($nc(that)->build())));
	}
	return var$0;
}

int32_t Runtime$Version::hashCode() {
	int32_t h = 1;
	int32_t p = 17;
	h = p * h + $nc(this->version$)->hashCode();
	h = p * h + $nc(this->pre$)->hashCode();
	h = p * h + $nc(this->build$)->hashCode();
	h = p * h + $nc(this->optional$)->hashCode();
	return h;
}

int32_t Runtime$Version::compareTo(Object$* obj) {
	return this->compareTo($cast(Runtime$Version, obj));
}

void Runtime$Version::lambda$toString$0($StringBuilder* sb, $String* v) {
	$init(Runtime$Version);
	$nc(sb)->append("-"_s)->append(v);
}

Runtime$Version::Runtime$Version() {
}

$Class* Runtime$Version::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Runtime$Version$$Lambda$toString::classInfo$.name)) {
			return Runtime$Version$$Lambda$toString::load$(name, initialize);
		}
		if (name->equals(Runtime$Version$$Lambda$lambda$toString$0$1::classInfo$.name)) {
			return Runtime$Version$$Lambda$lambda$toString$0$1::load$(name, initialize);
		}
	}
	$loadClass(Runtime$Version, name, initialize, &_Runtime$Version_ClassInfo_, allocate$Runtime$Version);
	return class$;
}

$Class* Runtime$Version::class$ = nullptr;

	} // lang
} // java
#include <java/lang/invoke/LambdaForm$Name.h>

#include <java/lang/AssertionError.h>
#include <java/lang/invoke/ClassSpecializer$SpeciesData.h>
#include <java/lang/invoke/LambdaForm$1.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef L_TYPE

using $LambdaForm$NameArray = $Array<::java::lang::invoke::LambdaForm$Name>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassSpecializer$SpeciesData = ::java::lang::invoke::ClassSpecializer$SpeciesData;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$1 = ::java::lang::invoke::LambdaForm$1;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _LambdaForm$Name_FieldAnnotations_index[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm$Name_FieldAnnotations_arguments[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _LambdaForm$Name_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm$Name, $assertionsDisabled)},
	{"type", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $FINAL, $field(LambdaForm$Name, type$)},
	{"index", "S", nullptr, 0, $field(LambdaForm$Name, index$), _LambdaForm$Name_FieldAnnotations_index},
	{"function", "Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $FINAL, $field(LambdaForm$Name, function)},
	{"constraint", "Ljava/lang/Object;", nullptr, $FINAL, $field(LambdaForm$Name, constraint)},
	{"arguments", "[Ljava/lang/Object;", nullptr, $FINAL, $field(LambdaForm$Name, arguments), _LambdaForm$Name_FieldAnnotations_arguments},
	{}
};

$MethodInfo _LambdaForm$Name_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/invoke/LambdaForm$BasicType;Ljava/lang/invoke/LambdaForm$NamedFunction;[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaForm$Name::*)(int32_t,$LambdaForm$BasicType*,$LambdaForm$NamedFunction*,$ObjectArray*)>(&LambdaForm$Name::init$))},
	{"<init>", "(Ljava/lang/invoke/LambdaForm$Name;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaForm$Name::*)(LambdaForm$Name*,Object$*)>(&LambdaForm$Name::init$))},
	{"<init>", "(Ljava/lang/invoke/MethodHandle;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(static_cast<void(LambdaForm$Name::*)($MethodHandle*,$ObjectArray*)>(&LambdaForm$Name::init$))},
	{"<init>", "(Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(static_cast<void(LambdaForm$Name::*)($MethodType*,$ObjectArray*)>(&LambdaForm$Name::init$))},
	{"<init>", "(Ljava/lang/invoke/MemberName;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(static_cast<void(LambdaForm$Name::*)($MemberName*,$ObjectArray*)>(&LambdaForm$Name::init$))},
	{"<init>", "(Ljava/lang/invoke/LambdaForm$NamedFunction;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(static_cast<void(LambdaForm$Name::*)($LambdaForm$NamedFunction*,$ObjectArray*)>(&LambdaForm$Name::init$))},
	{"<init>", "(ILjava/lang/invoke/LambdaForm$BasicType;)V", nullptr, 0, $method(static_cast<void(LambdaForm$Name::*)(int32_t,$LambdaForm$BasicType*)>(&LambdaForm$Name::init$))},
	{"<init>", "(Ljava/lang/invoke/LambdaForm$BasicType;)V", nullptr, 0, $method(static_cast<void(LambdaForm$Name::*)($LambdaForm$BasicType*)>(&LambdaForm$Name::init$))},
	{"cloneWithIndex", "(I)Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0, $method(static_cast<LambdaForm$Name*(LambdaForm$Name::*)(int32_t)>(&LambdaForm$Name::cloneWithIndex))},
	{"debugString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(LambdaForm$Name::*)()>(&LambdaForm$Name::debugString))},
	{"equals", "(Ljava/lang/invoke/LambdaForm$Name;)Z", nullptr, $PUBLIC, $method(static_cast<bool(LambdaForm$Name::*)(LambdaForm$Name*)>(&LambdaForm$Name::equals))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"exprString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(LambdaForm$Name::*)()>(&LambdaForm$Name::exprString))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"index", "()I", nullptr, 0, $method(static_cast<int32_t(LambdaForm$Name::*)()>(&LambdaForm$Name::index))},
	{"initIndex", "(I)Z", nullptr, 0, $method(static_cast<bool(LambdaForm$Name::*)(int32_t)>(&LambdaForm$Name::initIndex))},
	{"internArguments", "()V", nullptr, 0, $method(static_cast<void(LambdaForm$Name::*)()>(&LambdaForm$Name::internArguments))},
	{"isConstantZero", "()Z", nullptr, 0, $method(static_cast<bool(LambdaForm$Name::*)()>(&LambdaForm$Name::isConstantZero))},
	{"isInvokeBasic", "()Z", nullptr, 0, $method(static_cast<bool(LambdaForm$Name::*)()>(&LambdaForm$Name::isInvokeBasic))},
	{"isLinkerMethodInvoke", "()Z", nullptr, 0, $method(static_cast<bool(LambdaForm$Name::*)()>(&LambdaForm$Name::isLinkerMethodInvoke))},
	{"isParam", "()Z", nullptr, 0, $method(static_cast<bool(LambdaForm$Name::*)()>(&LambdaForm$Name::isParam))},
	{"lastUseIndex", "(Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, 0, $method(static_cast<int32_t(LambdaForm$Name::*)(LambdaForm$Name*)>(&LambdaForm$Name::lastUseIndex))},
	{"newIndex", "(I)Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0, $method(static_cast<LambdaForm$Name*(LambdaForm$Name::*)(int32_t)>(&LambdaForm$Name::newIndex))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(LambdaForm$Name::*)()>(&LambdaForm$Name::paramString))},
	{"refersTo", "(Ljava/lang/Class;Ljava/lang/String;)Z", "(Ljava/lang/Class<*>;Ljava/lang/String;)Z", 0, $method(static_cast<bool(LambdaForm$Name::*)($Class*,$String*)>(&LambdaForm$Name::refersTo))},
	{"replaceName", "(Ljava/lang/invoke/LambdaForm$Name;Ljava/lang/invoke/LambdaForm$Name;)Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0, $method(static_cast<LambdaForm$Name*(LambdaForm$Name::*)(LambdaForm$Name*,LambdaForm$Name*)>(&LambdaForm$Name::replaceName))},
	{"replaceNames", "([Ljava/lang/invoke/LambdaForm$Name;[Ljava/lang/invoke/LambdaForm$Name;II)Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0, $method(static_cast<LambdaForm$Name*(LambdaForm$Name::*)($LambdaForm$NameArray*,$LambdaForm$NameArray*,int32_t,int32_t)>(&LambdaForm$Name::replaceNames))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, 0, $method(static_cast<$LambdaForm$BasicType*(LambdaForm$Name::*)()>(&LambdaForm$Name::type))},
	{"typeChar", "()C", nullptr, 0, $method(static_cast<char16_t(LambdaForm$Name::*)()>(&LambdaForm$Name::typeChar))},
	{"typesMatch", "(Ljava/lang/invoke/LambdaForm$NamedFunction;[Ljava/lang/Object;)Z", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<bool(LambdaForm$Name::*)($LambdaForm$NamedFunction*,$ObjectArray*)>(&LambdaForm$Name::typesMatch))},
	{"typesMatch", "(Ljava/lang/invoke/LambdaForm$BasicType;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($LambdaForm$BasicType*,Object$*)>(&LambdaForm$Name::typesMatch))},
	{"useCount", "(Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, 0, $method(static_cast<int32_t(LambdaForm$Name::*)(LambdaForm$Name*)>(&LambdaForm$Name::useCount))},
	{"withConstraint", "(Ljava/lang/Object;)Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0, $method(static_cast<LambdaForm$Name*(LambdaForm$Name::*)(Object$*)>(&LambdaForm$Name::withConstraint))},
	{}
};

$InnerClassInfo _LambdaForm$Name_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaForm$Name", "java.lang.invoke.LambdaForm", "Name", $STATIC | $FINAL},
	{}
};

$ClassInfo _LambdaForm$Name_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.LambdaForm$Name",
	"java.lang.Object",
	nullptr,
	_LambdaForm$Name_FieldInfo_,
	_LambdaForm$Name_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaForm$Name_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaForm"
};

$Object* allocate$LambdaForm$Name($Class* clazz) {
	return $of($alloc(LambdaForm$Name));
}

bool LambdaForm$Name::$assertionsDisabled = false;

void LambdaForm$Name::init$(int32_t index, $LambdaForm$BasicType* type, $LambdaForm$NamedFunction* function, $ObjectArray* arguments) {
	this->index$ = (int16_t)index;
	$set(this, type$, type);
	$set(this, function, function);
	$set(this, arguments, arguments);
	$set(this, constraint, nullptr);
	if (!LambdaForm$Name::$assertionsDisabled && !(this->index$ == index)) {
		$throwNew($AssertionError);
	}
}

void LambdaForm$Name::init$(LambdaForm$Name* that, Object$* constraint) {
	this->index$ = $nc(that)->index$;
	$set(this, type$, that->type$);
	$set(this, function, that->function);
	$set(this, arguments, that->arguments);
	$set(this, constraint, constraint);
	if (!LambdaForm$Name::$assertionsDisabled && !(constraint == nullptr || isParam())) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm$Name::$assertionsDisabled && !(constraint == nullptr || $instanceOf($ClassSpecializer$SpeciesData, constraint) || $instanceOf($Class, constraint))) {
		$throwNew($AssertionError);
	}
}

void LambdaForm$Name::init$($MethodHandle* function, $ObjectArray* arguments) {
	LambdaForm$Name::init$($$new($LambdaForm$NamedFunction, function), arguments);
}

void LambdaForm$Name::init$($MethodType* functionType, $ObjectArray* arguments) {
	LambdaForm$Name::init$($$new($LambdaForm$NamedFunction, functionType), arguments);
	$init($LambdaForm$BasicType);
	if (!LambdaForm$Name::$assertionsDisabled && !($instanceOf(LambdaForm$Name, $nc(arguments)->get(0)) && $nc(($cast(LambdaForm$Name, arguments->get(0))))->type$ == $LambdaForm$BasicType::L_TYPE)) {
		$throwNew($AssertionError);
	}
}

void LambdaForm$Name::init$($MemberName* function, $ObjectArray* arguments) {
	LambdaForm$Name::init$($$new($LambdaForm$NamedFunction, function), arguments);
}

void LambdaForm$Name::init$($LambdaForm$NamedFunction* function, $ObjectArray* arguments$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, arguments, arguments$renamed);
	$var($LambdaForm$BasicType, var$0, $nc(function)->returnType());
	$var($LambdaForm$NamedFunction, var$1, function);
	$load($ObjectArray);
	LambdaForm$Name::init$(-1, var$0, var$1, $assign(arguments, $Arrays::copyOf(arguments, $nc(arguments)->length, $getClass($ObjectArray))));
	if (!LambdaForm$Name::$assertionsDisabled && !(typesMatch(function, arguments))) {
		$throwNew($AssertionError);
	}
}

void LambdaForm$Name::init$(int32_t index, $LambdaForm$BasicType* type) {
	LambdaForm$Name::init$(index, type, nullptr, nullptr);
}

void LambdaForm$Name::init$($LambdaForm$BasicType* type) {
	LambdaForm$Name::init$(-1, type);
}

$LambdaForm$BasicType* LambdaForm$Name::type() {
	return this->type$;
}

int32_t LambdaForm$Name::index() {
	return this->index$;
}

bool LambdaForm$Name::initIndex(int32_t i) {
	if (this->index$ != i) {
		if (this->index$ != -1) {
			return false;
		}
		this->index$ = (int16_t)i;
	}
	return true;
}

char16_t LambdaForm$Name::typeChar() {
	return this->type$->btChar;
}

LambdaForm$Name* LambdaForm$Name::newIndex(int32_t i) {
	if (initIndex(i)) {
		return this;
	}
	return cloneWithIndex(i);
}

LambdaForm$Name* LambdaForm$Name::cloneWithIndex(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, newArguments, (this->arguments == nullptr) ? ($ObjectArray*)nullptr : $cast($ObjectArray, $nc(this->arguments)->clone()));
	return $$new(LambdaForm$Name, i, this->type$, this->function, newArguments)->withConstraint(this->constraint);
}

LambdaForm$Name* LambdaForm$Name::withConstraint(Object$* constraint) {
	if ($equals(constraint, this->constraint)) {
		return this;
	}
	return $new(LambdaForm$Name, this, constraint);
}

LambdaForm$Name* LambdaForm$Name::replaceName(LambdaForm$Name* oldName, LambdaForm$Name* newName) {
	if (oldName == newName) {
		return this;
	}
	$var($ObjectArray, arguments, this->arguments);
	if (arguments == nullptr) {
		return this;
	}
	bool replaced = false;
	for (int32_t j = 0; j < $nc(arguments)->length; ++j) {
		if ($equals(arguments->get(j), oldName)) {
			if (!replaced) {
				replaced = true;
				$assign(arguments, $cast($ObjectArray, arguments->clone()));
			}
			arguments->set(j, newName);
		}
	}
	if (!replaced) {
		return this;
	}
	return $new(LambdaForm$Name, this->function, arguments);
}

LambdaForm$Name* LambdaForm$Name::replaceNames($LambdaForm$NameArray* oldNames, $LambdaForm$NameArray* newNames, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	if (start >= end) {
		return this;
	}
	$var($ObjectArray, arguments, this->arguments);
	bool replaced = false;
	bool eachArg$continue = false;
	for (int32_t j = 0; j < $nc(arguments)->length; ++j) {
		{
			$var(LambdaForm$Name, n, nullptr);
			$var($Object0, patt58623$temp, arguments->get(j));
			bool var$0 = $instanceOf(LambdaForm$Name, patt58623$temp);
			if (var$0) {
				$assign(n, $cast(LambdaForm$Name, patt58623$temp));
				var$0 = true;
			}
			if (var$0) {
				int32_t check = $nc(n)->index$;
				if (check >= 0 && check < $nc(newNames)->length && n == newNames->get(check)) {
					continue;
				}
				for (int32_t i = start; i < end; ++i) {
					if (n == $nc(oldNames)->get(i)) {
						if (n == $nc(newNames)->get(i)) {
							eachArg$continue = true;
							break;
						}
						if (!replaced) {
							replaced = true;
							$assign(arguments, $cast($ObjectArray, arguments->clone()));
						}
						arguments->set(j, $nc(newNames)->get(i));
						eachArg$continue = true;
						break;
					}
				}
				if (eachArg$continue) {
					eachArg$continue = false;
					continue;
				}
			}
		}
	}
	if (!replaced) {
		return this;
	}
	return $new(LambdaForm$Name, this->function, arguments);
}

void LambdaForm$Name::internArguments() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, arguments, this->arguments);
	for (int32_t j = 0; j < $nc(arguments)->length; ++j) {
		{
			$var(LambdaForm$Name, n, nullptr);
			$var($Object0, patt59891$temp, arguments->get(j));
			bool var$0 = $instanceOf(LambdaForm$Name, patt59891$temp);
			if (var$0) {
				$assign(n, $cast(LambdaForm$Name, patt59891$temp));
				var$0 = true;
			}
			if (var$0) {
				if ($nc(n)->isParam() && n->index$ < 10) {
					arguments->set(j, $($LambdaForm::internArgument(n)));
				}
			}
		}
	}
}

bool LambdaForm$Name::isParam() {
	return this->function == nullptr;
}

bool LambdaForm$Name::isConstantZero() {
	bool var$0 = !isParam() && $nc(this->arguments)->length == 0;
	return var$0 && $nc(this->function)->isConstantZero();
}

bool LambdaForm$Name::refersTo($Class* declaringClass, $String* methodName) {
	bool var$0 = this->function != nullptr && $nc(this->function)->member() != nullptr;
	return var$0 && $nc($($nc(this->function)->member()))->refersTo(declaringClass, methodName);
}

bool LambdaForm$Name::isInvokeBasic() {
	if (this->function == nullptr) {
		return false;
	}
	if ($nc(this->arguments)->length < 1) {
		return false;
	}
	$var($MemberName, member, $nc(this->function)->member());
	$load($MethodHandle);
	bool var$1 = member != nullptr && member->refersTo($MethodHandle::class$, "invokeBasic"_s);
	bool var$0 = var$1 && !member->isPublic();
	return var$0 && !member->isStatic();
}

bool LambdaForm$Name::isLinkerMethodInvoke() {
	$useLocalCurrentObjectStackCache();
	if (this->function == nullptr) {
		return false;
	}
	if ($nc(this->arguments)->length < 1) {
		return false;
	}
	$var($MemberName, member, $nc(this->function)->member());
	$load($MethodHandle);
	bool var$2 = member != nullptr && member->getDeclaringClass() == $MethodHandle::class$;
	bool var$1 = var$2 && !member->isPublic();
	bool var$0 = var$1 && member->isStatic();
	return var$0 && $nc($(member->getName()))->startsWith("linkTo"_s);
}

$String* LambdaForm$Name::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, (isParam() ? "a"_s : "t"_s));
	$var($String, var$1, $$concat(var$2, $$str((this->index$ >= 0 ? (int32_t)this->index$ : $System::identityHashCode(this)))));
	$var($String, var$0, $$concat(var$1, ":"));
	return $concat(var$0, $$str(typeChar()));
}

$String* LambdaForm$Name::debugString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, paramString());
	return (this->function == nullptr) ? s : $str({s, "="_s, $(exprString())});
}

$String* LambdaForm$Name::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, toString());
	$var($Object, c, this->constraint);
	if (c == nullptr) {
		return s;
	}
	if ($instanceOf($Class, c)) {
		$assign(c, $nc(($cast($Class, c)))->getSimpleName());
	}
	return $str({s, "/"_s, c});
}

$String* LambdaForm$Name::exprString() {
	$useLocalCurrentObjectStackCache();
	if (this->function == nullptr) {
		return toString();
	}
	$var($StringBuilder, buf, $new($StringBuilder, $($nc(this->function)->toString())));
	buf->append("("_s);
	$var($String, cma, ""_s);
	{
		$var($ObjectArray, arr$, this->arguments);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, a, arr$->get(i$));
			{
				buf->append(cma);
				$assign(cma, ","_s);
				if ($instanceOf(LambdaForm$Name, a) || $instanceOf($Integer, a)) {
					buf->append(a);
				} else {
					buf->append("("_s)->append(a)->append(")"_s);
				}
			}
		}
	}
	buf->append(")"_s);
	return buf->toString();
}

bool LambdaForm$Name::typesMatch($LambdaForm$NamedFunction* function, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	if (!LambdaForm$Name::$assertionsDisabled && !($nc(arguments)->length == $nc(function)->arity())) {
		$var($String, var$0, $$str({"arity mismatch: arguments.length="_s, $$str(arguments->length), " == function.arity()="_s, $$str(function->arity()), " in "_s}));
		$throwNew($AssertionError, $of(($$concat(var$0, $(debugString())))));
	}
	for (int32_t i = 0; i < $nc(arguments)->length; ++i) {
		if (!LambdaForm$Name::$assertionsDisabled && !(typesMatch($($nc(function)->parameterType(i)), arguments->get(i)))) {
			$var($String, var$1, $$str({"types don\'t match: function.parameterType("_s, $$str(i), ")="_s, $($nc(function)->parameterType(i)), ", arguments["_s, $$str(i), "]="_s, arguments->get(i), " in "_s}));
			$throwNew($AssertionError, $of(($$concat(var$1, $(debugString())))));
		}
	}
	return true;
}

bool LambdaForm$Name::typesMatch($LambdaForm$BasicType* parameterType, Object$* object) {
	$init(LambdaForm$Name);
	if ($instanceOf(LambdaForm$Name, object)) {
		return $nc(($cast(LambdaForm$Name, object)))->type$ == parameterType;
	}
	$init($LambdaForm$1);
	switch ($nc($LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->get($nc((parameterType))->ordinal())) {
	case 1:
		{
			return $instanceOf($Integer, object);
		}
	case 2:
		{
			return $instanceOf($Long, object);
		}
	case 3:
		{
			return $instanceOf($Float, object);
		}
	case 4:
		{
			return $instanceOf($Double, object);
		}
	}
	if (!LambdaForm$Name::$assertionsDisabled && !(parameterType == $LambdaForm$BasicType::L_TYPE)) {
		$throwNew($AssertionError);
	}
	return true;
}

int32_t LambdaForm$Name::lastUseIndex(LambdaForm$Name* n) {
	if (this->arguments == nullptr) {
		return -1;
	}
	for (int32_t i = $nc(this->arguments)->length; --i >= 0;) {
		if ($equals($nc(this->arguments)->get(i), n)) {
			return i;
		}
	}
	return -1;
}

int32_t LambdaForm$Name::useCount(LambdaForm$Name* n) {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	if (this->arguments != nullptr) {
		{
			$var($ObjectArray, arr$, this->arguments);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, argument, arr$->get(i$));
				{
					if ($equals(argument, n)) {
						++count;
					}
				}
			}
		}
	}
	return count;
}

bool LambdaForm$Name::equals(LambdaForm$Name* that) {
	if (this == that) {
		return true;
	}
	if (isParam()) {
		return false;
	}
	bool var$0 = this->type$ == $nc(that)->type$ && $nc(this->function)->equals(that->function);
	return var$0 && $Arrays::equals(this->arguments, that->arguments);
}

bool LambdaForm$Name::equals(Object$* x) {
	return $instanceOf(LambdaForm$Name, x) && equals($cast(LambdaForm$Name, x));
}

int32_t LambdaForm$Name::hashCode() {
	if (isParam()) {
		return this->index$ | (this->type$->ordinal() << 8);
	}
	int32_t var$0 = $nc(this->function)->hashCode();
	return var$0 ^ $Arrays::hashCode(this->arguments);
}

void clinit$LambdaForm$Name($Class* class$) {
	$load($LambdaForm);
	LambdaForm$Name::$assertionsDisabled = !$LambdaForm::class$->desiredAssertionStatus();
}

LambdaForm$Name::LambdaForm$Name() {
}

$Class* LambdaForm$Name::load$($String* name, bool initialize) {
	$loadClass(LambdaForm$Name, name, initialize, &_LambdaForm$Name_ClassInfo_, clinit$LambdaForm$Name, allocate$LambdaForm$Name);
	return class$;
}

$Class* LambdaForm$Name::class$ = nullptr;

		} // invoke
	} // lang
} // java
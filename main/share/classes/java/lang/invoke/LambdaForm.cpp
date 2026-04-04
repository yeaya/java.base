#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/InvokerBytecodeGenerator$BytecodeGenerationException.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/LambdaForm$1.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm$Holder.h>
#include <java/lang/invoke/LambdaForm$Kind.h>
#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaFormEditor.h>
#include <java/lang/invoke/MemberName$Factory.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/SimpleMethodHandle.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/perf/PerfCounter.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ARG_TYPES
#undef ARG_TYPE_LIMIT
#undef COMPILE_THRESHOLD
#undef DEBUG_NAMES
#undef DEBUG_NAME_COUNTERS
#undef GENERIC
#undef IDENTITY
#undef IMPL_NAMES
#undef INT
#undef INTERNED_ARGUMENTS
#undef INTERNED_ARGUMENT_LIMIT
#undef LAST_RESULT
#undef LF_FAILED
#undef LF_INTERPRET
#undef LOG_LF_COMPILATION_FAILURE
#undef L_TYPE
#undef MAX_JVM_ARITY
#undef MAX_MH_INVOKER_ARITY
#undef MIN_RUN
#undef NO_CHAR
#undef POS_COLLECT_ARGS
#undef POS_TABLE_SWITCH
#undef POS_UNBOX_RESULT
#undef TRACE_INTERPRETER
#undef TYPE
#undef TYPE_LIMIT
#undef UNSAFE
#undef VOID_RESULT
#undef V_TYPE
#undef ZERO

using $IntegerArray = $Array<::java::lang::Integer>;
using $LambdaForm$BasicTypeArray = $Array<::java::lang::invoke::LambdaForm$BasicType>;
using $LambdaForm$NameArray = $Array<::java::lang::invoke::LambdaForm$Name>;
using $LambdaForm$NamedFunctionArray = $Array<::java::lang::invoke::LambdaForm$NamedFunction>;
using $LambdaFormArray = $Array<::java::lang::invoke::LambdaForm>;
using $LambdaForm$NameArray2 = $Array<::java::lang::invoke::LambdaForm$Name, 2>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Void = ::java::lang::Void;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $InvokerBytecodeGenerator$BytecodeGenerationException = ::java::lang::invoke::InvokerBytecodeGenerator$BytecodeGenerationException;
using $LambdaForm$1 = ::java::lang::invoke::LambdaForm$1;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaForm$Holder = ::java::lang::invoke::LambdaForm$Holder;
using $LambdaForm$Kind = ::java::lang::invoke::LambdaForm$Kind;
using $LambdaForm$Name = ::java::lang::invoke::LambdaForm$Name;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $LambdaFormEditor = ::java::lang::invoke::LambdaFormEditor;
using $MemberName = ::java::lang::invoke::MemberName;
using $MemberName$Factory = ::java::lang::invoke::MemberName$Factory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $SimpleMethodHandle = ::java::lang::invoke::SimpleMethodHandle;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $PerfCounter = ::jdk::internal::perf::PerfCounter;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

bool LambdaForm::$assertionsDisabled = false;
$PerfCounter* LambdaForm::LF_FAILED = nullptr;
int32_t LambdaForm::COMPILE_THRESHOLD = 0;
$LambdaForm$NameArray2* LambdaForm::INTERNED_ARGUMENTS = nullptr;
$MemberName$Factory* LambdaForm::IMPL_NAMES = nullptr;
$LambdaFormArray* LambdaForm::LF_identity = nullptr;
$LambdaFormArray* LambdaForm::LF_zero = nullptr;
$LambdaForm$NamedFunctionArray* LambdaForm::NF_identity = nullptr;
$LambdaForm$NamedFunctionArray* LambdaForm::NF_zero = nullptr;
$Object* LambdaForm::createFormsLock = nullptr;
$HashMap* LambdaForm::DEBUG_NAME_COUNTERS = nullptr;
$HashMap* LambdaForm::DEBUG_NAMES = nullptr;
bool LambdaForm::TRACE_INTERPRETER = false;

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, int32_t result) {
	$init($LambdaForm$Kind);
	LambdaForm::init$(arity, names, result, true, nullptr, $LambdaForm$Kind::GENERIC);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, int32_t result, $LambdaForm$Kind* kind) {
	LambdaForm::init$(arity, names, result, true, nullptr, kind);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, int32_t result, bool forceInline, $MethodHandle* customized) {
	$init($LambdaForm$Kind);
	LambdaForm::init$(arity, names, result, forceInline, customized, $LambdaForm$Kind::GENERIC);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, int32_t result, bool forceInline, $MethodHandle* customized, $LambdaForm$Kind* kind) {
	this->invocationCounter = 0;
	if (!LambdaForm::$assertionsDisabled && !(namesOK(arity, names))) {
		$throwNew($AssertionError);
	}
	this->arity$ = arity;
	this->result = fixResult(result, names);
	$set(this, names, $cast($LambdaForm$NameArray, $nc(names)->clone()));
	this->forceInline = forceInline;
	$set(this, customized, customized);
	$set(this, kind, kind);
	int32_t maxOutArity = normalize();
	if (maxOutArity > $MethodType::MAX_MH_INVOKER_ARITY) {
		if (!LambdaForm::$assertionsDisabled && !(maxOutArity <= $MethodType::MAX_JVM_ARITY)) {
			$throwNew($AssertionError);
		}
		compileToBytecode();
	}
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names) {
	$init($LambdaForm$Kind);
	LambdaForm::init$(arity, names, LambdaForm::LAST_RESULT, true, nullptr, $LambdaForm$Kind::GENERIC);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, $LambdaForm$Kind* kind) {
	LambdaForm::init$(arity, names, LambdaForm::LAST_RESULT, true, nullptr, kind);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, bool forceInline, $LambdaForm$Kind* kind) {
	LambdaForm::init$(arity, names, LambdaForm::LAST_RESULT, forceInline, nullptr, kind);
}

$LambdaForm$NameArray* LambdaForm::buildNames($LambdaForm$NameArray* formals, $LambdaForm$NameArray* temps, $LambdaForm$Name* result) {
	$init(LambdaForm);
	int32_t arity = $nc(formals)->length;
	int32_t length = arity + $nc(temps)->length + (result == nullptr ? 0 : 1);
	$var($LambdaForm$NameArray, names, $cast($LambdaForm$NameArray, $Arrays::copyOf(formals, length)));
	$System::arraycopy(temps, 0, names, arity, temps->length);
	if (result != nullptr) {
		names->set(length - 1, result);
	}
	return names;
}

void LambdaForm::init$($MethodType* mt) {
	$useLocalObjectStack();
	this->invocationCounter = 0;
	this->arity$ = $nc(mt)->parameterCount();
	bool var$0 = $cast($Class, mt->returnType()) == $Void::TYPE;
	this->result = (var$0 || $cast($Class, mt->returnType()) == $Void::class$) ? -1 : this->arity$;
	$set(this, names, buildEmptyNames(this->arity$, mt, this->result == -1));
	this->forceInline = true;
	$set(this, customized, nullptr);
	$init($LambdaForm$Kind);
	$set(this, kind, $LambdaForm$Kind::ZERO);
	if (!LambdaForm::$assertionsDisabled && !(nameRefsAreLegal())) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm::$assertionsDisabled && !(isEmpty())) {
		$throwNew($AssertionError);
	}
	$var($String, sig, nullptr);
	if (!LambdaForm::$assertionsDisabled && !(isValidSignature($assign(sig, basicTypeSignature())))) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm::$assertionsDisabled && !($nc(sig)->equals($(basicTypeSignature())))) {
		$throwNew($AssertionError, $$of($str({sig, " != "_s, $(basicTypeSignature())})));
	}
}

$LambdaForm$NameArray* LambdaForm::buildEmptyNames(int32_t arity, $MethodType* mt, bool isVoid) {
	$init(LambdaForm);
	$useLocalObjectStack();
	$var($LambdaForm$NameArray, names, arguments(isVoid ? 0 : 1, mt));
	if (!isVoid) {
		$var($LambdaForm$Name, zero, $new($LambdaForm$Name, $(constantZero($($LambdaForm$BasicType::basicType($$cast($Class, $nc(mt)->returnType()))))), $$new($ObjectArray, 0)));
		$nc(names)->set(arity, $(zero->newIndex(arity)));
	}
	return names;
}

int32_t LambdaForm::fixResult(int32_t result, $LambdaForm$NameArray* names) {
	$init(LambdaForm);
	if (result == LambdaForm::LAST_RESULT) {
		result = $nc(names)->length - 1;
	}
	$init($LambdaForm$BasicType);
	if (result >= 0 && $nc($nc(names)->get(result))->type$ == $LambdaForm$BasicType::V_TYPE) {
		result = LambdaForm::VOID_RESULT;
	}
	return result;
}

bool LambdaForm::debugNames() {
	$init(LambdaForm);
	return LambdaForm::DEBUG_NAME_COUNTERS != nullptr;
}

void LambdaForm::associateWithDebugName(LambdaForm* form, $String* name) {
	$init(LambdaForm);
	if (!LambdaForm::$assertionsDisabled && !(debugNames())) {
		$throwNew($AssertionError);
	}
	$synchronized(LambdaForm::DEBUG_NAMES) {
		LambdaForm::DEBUG_NAMES->put(form, name);
	}
}

$String* LambdaForm::lambdaName() {
	if (LambdaForm::DEBUG_NAMES != nullptr) {
		$synchronized(LambdaForm::DEBUG_NAMES) {
			$var($String, name, $cast($String, LambdaForm::DEBUG_NAMES->get(this)));
			if (name == nullptr) {
				$assign(name, generateDebugName());
			}
			return name;
		}
	}
	return this->kind->defaultLambdaName;
}

$String* LambdaForm::generateDebugName() {
	$useLocalObjectStack();
	if (!LambdaForm::$assertionsDisabled && !(debugNames())) {
		$throwNew($AssertionError);
	}
	$var($String, debugNameStem, this->kind->defaultLambdaName);
	$var($Integer, ctr, $cast($Integer, $nc(LambdaForm::DEBUG_NAME_COUNTERS)->getOrDefault(debugNameStem, $($Integer::valueOf(0)))));
	LambdaForm::DEBUG_NAME_COUNTERS->put(debugNameStem, $($Integer::valueOf($nc(ctr)->intValue() + 1)));
	$var($StringBuilder, buf, $new($StringBuilder, debugNameStem));
	int32_t leadingZero = buf->length();
	buf->append(ctr->intValue());
	for (int32_t i = buf->length() - leadingZero; i < 3; ++i) {
		buf->insert(leadingZero, u'0');
	}
	buf->append(u'_');
	buf->append($(basicTypeSignature()));
	$var($String, name, buf->toString());
	associateWithDebugName(this, name);
	return name;
}

bool LambdaForm::namesOK(int32_t arity, $LambdaForm$NameArray* names) {
	$init(LambdaForm);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		$var($LambdaForm$Name, n, names->get(i));
		if (!LambdaForm::$assertionsDisabled && !(n != nullptr)) {
			$throwNew($AssertionError, $of("n is null"_s));
		}
		if (i < arity) {
			if (!LambdaForm::$assertionsDisabled && !($nc(n)->isParam())) {
				$throwNew($AssertionError, $$of($str({n, " is not param at "_s, $$str(i)})));
			}
		} else if (!LambdaForm::$assertionsDisabled && !(!$nc(n)->isParam())) {
			$throwNew($AssertionError, $$of($str({n, " is param at "_s, $$str(i)})));
		}
	}
	return true;
}

LambdaForm* LambdaForm::customize($MethodHandle* mh) {
	if (this->customized == mh) {
		return this;
	}
	$var(LambdaForm, customForm, $new(LambdaForm, this->arity$, this->names, this->result, this->forceInline, mh, this->kind));
	if (LambdaForm::COMPILE_THRESHOLD >= 0 && this->isCompiled) {
		customForm->compileToBytecode();
	}
	$set(customForm, transformCache, this);
	return customForm;
}

LambdaForm* LambdaForm::uncustomize() {
	if (this->customized == nullptr) {
		return this;
	}
	if (!LambdaForm::$assertionsDisabled && !(this->transformCache != nullptr)) {
		$throwNew($AssertionError);
	}
	$var(LambdaForm, uncustomizedForm, $cast(LambdaForm, this->transformCache));
	if (LambdaForm::COMPILE_THRESHOLD >= 0 && this->isCompiled) {
		$nc(uncustomizedForm)->compileToBytecode();
	}
	return uncustomizedForm;
}

int32_t LambdaForm::normalize() {
	$useLocalObjectStack();
	$var($LambdaForm$NameArray, oldNames, nullptr);
	int32_t maxOutArity = 0;
	int32_t changesStart = 0;
	for (int32_t i = 0; i < $nc(this->names)->length; ++i) {
		$var($LambdaForm$Name, n, this->names->get(i));
		if (!$nc(n)->initIndex(i)) {
			if (oldNames == nullptr) {
				$assign(oldNames, $cast($LambdaForm$NameArray, this->names->clone()));
				changesStart = i;
			}
			this->names->set(i, $(n->cloneWithIndex(i)));
		}
		if (n->arguments != nullptr && maxOutArity < n->arguments->length) {
			maxOutArity = n->arguments->length;
		}
	}
	if (oldNames != nullptr) {
		int32_t startFixing = this->arity$;
		if (startFixing <= changesStart) {
			startFixing = changesStart + 1;
		}
		for (int32_t i = startFixing; i < this->names->length; ++i) {
			$var($LambdaForm$Name, fixed, $nc(this->names->get(i))->replaceNames(oldNames, this->names, changesStart, i));
			this->names->set(i, $($nc(fixed)->newIndex(i)));
		}
	}
	if (!LambdaForm::$assertionsDisabled && !(nameRefsAreLegal())) {
		$throwNew($AssertionError);
	}
	int32_t maxInterned = $Math::min(this->arity$, LambdaForm::INTERNED_ARGUMENT_LIMIT);
	bool needIntern = false;
	for (int32_t i = 0; i < maxInterned; ++i) {
		$var($LambdaForm$Name, n, this->names->get(i));
		$var($LambdaForm$Name, n2, internArgument(n));
		if (n != n2) {
			this->names->set(i, n2);
			needIntern = true;
		}
	}
	if (needIntern) {
		for (int32_t i = this->arity$; i < this->names->length; ++i) {
			$nc(this->names->get(i))->internArguments();
		}
	}
	if (!LambdaForm::$assertionsDisabled && !(nameRefsAreLegal())) {
		$throwNew($AssertionError);
	}
	return maxOutArity;
}

bool LambdaForm::nameRefsAreLegal() {
	$useLocalObjectStack();
	if (!LambdaForm::$assertionsDisabled && !(this->arity$ >= 0 && this->arity$ <= $nc(this->names)->length)) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm::$assertionsDisabled && !(this->result >= -1 && this->result < $nc(this->names)->length)) {
		$throwNew($AssertionError);
	}
	for (int32_t i = 0; i < this->arity$; ++i) {
		$var($LambdaForm$Name, n, $nc(this->names)->get(i));
		if (!LambdaForm::$assertionsDisabled && !($nc(n)->index() == i)) {
			$throwNew($AssertionError, $($Arrays::asList($$new($IntegerArray, {
				$($Integer::valueOf(n->index())),
				$($Integer::valueOf(i))
			}))));
		}
		if (!LambdaForm::$assertionsDisabled && !($nc(n)->isParam())) {
			$throwNew($AssertionError);
		}
	}
	for (int32_t i = this->arity$; i < $nc(this->names)->length; ++i) {
		$var($LambdaForm$Name, n, this->names->get(i));
		if (!LambdaForm::$assertionsDisabled && !($nc(n)->index() == i)) {
			$throwNew($AssertionError);
		}
		{
			$var($ObjectArray, arr$, $nc(n)->arguments);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Object0, arg, arr$->get(i$));
				{
					$var($LambdaForm$Name, n2, nullptr);
					bool var$0 = $instanceOf($LambdaForm$Name, arg);
					if (var$0) {
						$assign(n2, $cast($LambdaForm$Name, arg));
						var$0 = true;
					}
					if (var$0) {
						int32_t i2 = $nc(n2)->index$;
						if (!LambdaForm::$assertionsDisabled && !(0 <= i2 && i2 < this->names->length)) {
							$throwNew($AssertionError, $$of($str({$(n->debugString()), ": 0 <= i2 && i2 < names.length: 0 <= "_s, $$str(i2), " < "_s, $$str(this->names->length)})));
						}
						if (!LambdaForm::$assertionsDisabled && !(this->names->get(i2) == n2)) {
							$throwNew($AssertionError, $($Arrays::asList($$new($ObjectArray, {
								"-1-"_s,
								$($Integer::valueOf(i)),
								"-2-"_s,
								$(n->debugString()),
								"-3-"_s,
								$($Integer::valueOf(i2)),
								"-4-"_s,
								$(n2->debugString()),
								"-5-"_s,
								$($nc(this->names->get(i2))->debugString()),
								"-6-"_s,
								this
							}))));
						}
						if (!LambdaForm::$assertionsDisabled && !(i2 < i)) {
							$throwNew($AssertionError);
						}
					}
				}
			}
		}
	}
	return true;
}

$LambdaForm$BasicType* LambdaForm::returnType() {
	if (this->result < 0) {
		$init($LambdaForm$BasicType);
		return $LambdaForm$BasicType::V_TYPE;
	}
	$var($LambdaForm$Name, n, $nc(this->names)->get(this->result));
	return $nc(n)->type$;
}

$LambdaForm$BasicType* LambdaForm::parameterType(int32_t n) {
	return $nc($(parameter(n)))->type$;
}

$LambdaForm$Name* LambdaForm::parameter(int32_t n) {
	$var($LambdaForm$Name, param, $nc(this->names)->get(n));
	if (!LambdaForm::$assertionsDisabled && !(n < this->arity$ && $nc(param)->isParam())) {
		$throwNew($AssertionError);
	}
	return param;
}

$Object* LambdaForm::parameterConstraint(int32_t n) {
	return $nc($(parameter(n)))->constraint;
}

int32_t LambdaForm::arity() {
	return this->arity$;
}

int32_t LambdaForm::expressionCount() {
	return $nc(this->names)->length - this->arity$;
}

$MethodType* LambdaForm::methodType() {
	$useLocalObjectStack();
	$var($ClassArray, ptypes, $new($ClassArray, this->arity$));
	for (int32_t i = 0; i < this->arity$; ++i) {
		ptypes->set(i, $nc($(parameterType(i)))->btClass);
	}
	return $MethodType::makeImpl($nc($(returnType()))->btClass, ptypes, true);
}

$String* LambdaForm::basicTypeSignature() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder, arity() + 3));
	for (int32_t i = 0, a = arity(); i < a; ++i) {
		buf->append($$nc(parameterType(i))->basicTypeChar());
	}
	return buf->append(u'_')->append($$nc(returnType())->basicTypeChar())->toString();
}

int32_t LambdaForm::signatureArity($String* sig) {
	$init(LambdaForm);
	if (!LambdaForm::$assertionsDisabled && !(isValidSignature(sig))) {
		$throwNew($AssertionError);
	}
	return $nc(sig)->indexOf(u'_');
}

bool LambdaForm::isValidSignature($String* sig) {
	$init(LambdaForm);
	int32_t arity = $nc(sig)->indexOf(u'_');
	if (arity < 0) {
		return false;
	}
	int32_t siglen = sig->length();
	if (siglen != arity + 2) {
		return false;
	}
	for (int32_t i = 0; i < siglen; ++i) {
		if (i == arity) {
			continue;
		}
		char16_t c = sig->charAt(i);
		if (c == u'V') {
			return (i == siglen - 1 && arity == siglen - 2);
		}
		if (!$LambdaForm$BasicType::isArgBasicTypeChar(c)) {
			return false;
		}
	}
	return true;
}

bool LambdaForm::isSelectAlternative(int32_t pos) {
	$useLocalObjectStack();
	if (pos + 1 >= $nc(this->names)->length) {
		return false;
	}
	$var($LambdaForm$Name, name0, this->names->get(pos));
	$var($LambdaForm$Name, name1, this->names->get(pos + 1));
	$load($MethodHandleImpl);
	bool var$2 = $nc(name0)->refersTo($MethodHandleImpl::class$, "selectAlternative"_s);
	bool var$1 = var$2 && $nc(name1)->isInvokeBasic();
	bool var$0 = var$1 && name1->lastUseIndex(name0) == 0;
	return var$0 && lastUseIndex(name0) == pos + 1;
}

bool LambdaForm::isMatchingIdiom(int32_t pos, $String* idiomName, int32_t nArgs) {
	$useLocalObjectStack();
	if (pos + 2 >= $nc(this->names)->length) {
		return false;
	}
	$var($LambdaForm$Name, name0, this->names->get(pos));
	$var($LambdaForm$Name, name1, this->names->get(pos + 1));
	$var($LambdaForm$Name, name2, this->names->get(pos + 2));
	$load($MethodHandleImpl);
	bool var$5 = $nc(name1)->refersTo($MethodHandleImpl::class$, idiomName);
	bool var$4 = var$5 && $nc(name0)->isInvokeBasic();
	bool var$3 = var$4 && $nc(name2)->isInvokeBasic();
	bool var$2 = var$3 && name1->lastUseIndex(name0) == nArgs;
	bool var$1 = var$2 && lastUseIndex(name0) == pos + 1;
	bool var$0 = var$1 && name2->lastUseIndex(name1) == 1;
	return var$0 && lastUseIndex(name1) == pos + 2;
}

bool LambdaForm::isGuardWithCatch(int32_t pos) {
	return isMatchingIdiom(pos, "guardWithCatch"_s, 3);
}

bool LambdaForm::isTryFinally(int32_t pos) {
	return isMatchingIdiom(pos, "tryFinally"_s, 2);
}

bool LambdaForm::isTableSwitch(int32_t pos) {
	$useLocalObjectStack();
	if (pos + 2 >= $nc(this->names)->length) {
		return false;
	}
	int32_t POS_COLLECT_ARGS = pos;
	int32_t POS_TABLE_SWITCH = pos + 1;
	int32_t POS_UNBOX_RESULT = pos + 2;
	$var($LambdaForm$Name, collectArgs, this->names->get(POS_COLLECT_ARGS));
	$var($LambdaForm$Name, tableSwitch, this->names->get(POS_TABLE_SWITCH));
	$var($LambdaForm$Name, unboxResult, this->names->get(POS_UNBOX_RESULT));
	$load($MethodHandleImpl);
	bool var$5 = $nc(tableSwitch)->refersTo($MethodHandleImpl::class$, "tableSwitch"_s);
	bool var$4 = var$5 && $nc(collectArgs)->isInvokeBasic();
	bool var$3 = var$4 && $nc(unboxResult)->isInvokeBasic();
	bool var$2 = var$3 && tableSwitch->lastUseIndex(collectArgs) == 3;
	bool var$1 = var$2 && lastUseIndex(collectArgs) == POS_TABLE_SWITCH;
	bool var$0 = var$1 && unboxResult->lastUseIndex(tableSwitch) == 1;
	return var$0 && lastUseIndex(tableSwitch) == POS_UNBOX_RESULT;
}

bool LambdaForm::isLoop(int32_t pos) {
	return isMatchingIdiom(pos, "loop"_s, 2);
}

void LambdaForm::prepare() {
	$useLocalObjectStack();
	if (LambdaForm::COMPILE_THRESHOLD == 0 && !forceInterpretation() && !this->isCompiled) {
		compileToBytecode();
	}
	if (this->vmentry != nullptr) {
		return;
	}
	$var($MethodType, mtype, methodType());
	$var(LambdaForm, prep, $$nc($nc(mtype)->form())->cachedLambdaForm($MethodTypeForm::LF_INTERPRET));
	if (prep == nullptr) {
		if (!LambdaForm::$assertionsDisabled && !(isValidSignature($(basicTypeSignature())))) {
			$throwNew($AssertionError);
		}
		$assign(prep, $new(LambdaForm, mtype));
		$set(prep, vmentry, $InvokerBytecodeGenerator::generateLambdaFormInterpreterEntryPoint(mtype));
		$assign(prep, $$nc(mtype->form())->setCachedLambdaForm($MethodTypeForm::LF_INTERPRET, prep));
	}
	$set(this, vmentry, $nc(prep)->vmentry);
}

$PerfCounter* LambdaForm::failedCompilationCounter() {
	$init(LambdaForm);
	if (LambdaForm::LF_FAILED == nullptr) {
		$assignStatic(LambdaForm::LF_FAILED, $PerfCounter::newPerfCounter("java.lang.invoke.failedLambdaFormCompilations"_s));
	}
	return LambdaForm::LF_FAILED;
}

void LambdaForm::compileToBytecode() {
	$useLocalObjectStack();
	if (forceInterpretation()) {
		return;
	}
	if (this->vmentry != nullptr && this->isCompiled) {
		return;
	}
	$var($MethodType, invokerType, methodType());
	if (!LambdaForm::$assertionsDisabled && !(this->vmentry == nullptr || $$nc($$nc(this->vmentry->getMethodType())->basicType())->equals($of(invokerType)))) {
		$throwNew($AssertionError);
	}
	try {
		$set(this, vmentry, $InvokerBytecodeGenerator::generateCustomizedCode(this, invokerType));
		if (LambdaForm::TRACE_INTERPRETER) {
			traceInterpreter("compileToBytecode"_s, this);
		}
		this->isCompiled = true;
	} catch ($InvokerBytecodeGenerator$BytecodeGenerationException& bge) {
		this->invocationCounter = -1;
		$$nc(failedCompilationCounter())->increment();
		$init($MethodHandleStatics);
		if ($MethodHandleStatics::LOG_LF_COMPILATION_FAILURE) {
			$nc($System::out)->println($$str({"LambdaForm compilation failed: "_s, this}));
			bge->printStackTrace($System::out);
		}
	} catch ($Error& e) {
		$throw(e);
	} catch ($Exception& e) {
		$throw($($MethodHandleStatics::newInternalError($(this->toString()), e)));
	}
}

bool LambdaForm::argumentTypesMatch($String* sig, $ObjectArray* av) {
	$init(LambdaForm);
	$useLocalObjectStack();
	int32_t arity = signatureArity(sig);
	if (!LambdaForm::$assertionsDisabled && !($nc(av)->length == arity)) {
		$throwNew($AssertionError, $$of($str({"av.length == arity: av.length="_s, $$str(av->length), ", arity="_s, $$str(arity)})));
	}
	if (!LambdaForm::$assertionsDisabled && !($instanceOf($MethodHandle, $nc(av)->get(0)))) {
		$throwNew($AssertionError, $$of($str({"av[0] not instance of MethodHandle: "_s, av->get(0)})));
	}
	$var($MethodHandle, mh, $cast($MethodHandle, $nc(av)->get(0)));
	$var($MethodType, mt, $nc(mh)->type());
	if (!LambdaForm::$assertionsDisabled && !($nc(mt)->parameterCount() == arity - 1)) {
		$throwNew($AssertionError);
	}
	for (int32_t i = 0; i < av->length; ++i) {
		$Class* pt = (i == 0 ? $MethodHandle::class$ : $cast($Class, $nc(mt)->parameterType(i - 1)));
		if (!LambdaForm::$assertionsDisabled && !(valueMatches($($LambdaForm$BasicType::basicType($nc(sig)->charAt(i))), pt, av->get(i)))) {
			$throwNew($AssertionError);
		}
	}
	return true;
}

bool LambdaForm::valueMatches($LambdaForm$BasicType* tc$renamed, $Class* type, Object$* x) {
	$init(LambdaForm);
	$useLocalObjectStack();
	$var($LambdaForm$BasicType, tc, tc$renamed);
	if (type == $Void::TYPE) {
		$init($LambdaForm$BasicType);
		tc = $LambdaForm$BasicType::V_TYPE;
	}
	if (!LambdaForm::$assertionsDisabled && !(tc == $LambdaForm$BasicType::basicType(type))) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(tc);
		var$0->append(" == basicType("_s);
		var$0->append(type);
		var$0->append(")="_s);
		var$0->append($($LambdaForm$BasicType::basicType(type)));
		$throwNew($AssertionError, $$of($str(var$0)));
	}
	$init($LambdaForm$1);
	switch ($nc($LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->get($nc((tc))->ordinal())) {
	case 1:
		if (!LambdaForm::$assertionsDisabled && !checkInt(type, x)) {
			$throwNew($AssertionError, $$of($str({"checkInt("_s, type, ","_s, x, ")"_s})));
		}
		break;
	case 2:
		if (!LambdaForm::$assertionsDisabled && !$instanceOf($Long, x)) {
			$throwNew($AssertionError, $$of($str({"instanceof Long: "_s, x})));
		}
		break;
	case 3:
		if (!LambdaForm::$assertionsDisabled && !$instanceOf($Float, x)) {
			$throwNew($AssertionError, $$of($str({"instanceof Float: "_s, x})));
		}
		break;
	case 4:
		if (!LambdaForm::$assertionsDisabled && !$instanceOf($Double, x)) {
			$throwNew($AssertionError, $$of($str({"instanceof Double: "_s, x})));
		}
		break;
	case 5:
		if (!LambdaForm::$assertionsDisabled && !checkRef(type, x)) {
			$throwNew($AssertionError, $$of($str({"checkRef("_s, type, ","_s, x, ")"_s})));
		}
		break;
	case 6:
		break;
	default:
		if (!LambdaForm::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
	return true;
}

bool LambdaForm::checkInt($Class* type, Object$* x) {
	$init(LambdaForm);
	$useLocalObjectStack();
	if (!LambdaForm::$assertionsDisabled && !($instanceOf($Integer, x))) {
		$throwNew($AssertionError);
	}
	if (type == $Integer::TYPE) {
		return true;
	}
	$Wrapper* w = $Wrapper::forBasicType(type);
	if (!LambdaForm::$assertionsDisabled && !($nc(w)->isSubwordOrInt())) {
		$throwNew($AssertionError);
	}
	$var($Object, x1, $Wrapper::INT->wrap($($nc(w)->wrap(x))));
	return $nc($of(x))->equals(x1);
}

bool LambdaForm::checkRef($Class* type, Object$* x) {
	$init(LambdaForm);
	if (!LambdaForm::$assertionsDisabled && !(!$nc(type)->isPrimitive())) {
		$throwNew($AssertionError);
	}
	if (x == nullptr) {
		return true;
	}
	if ($nc(type)->isInterface()) {
		return true;
	}
	return type->isInstance(x);
}

bool LambdaForm::forceInterpretation() {
	return this->invocationCounter == -1;
}

$Object* LambdaForm::interpretWithArguments($ObjectArray* argumentValues) {
	$useLocalObjectStack();
	if (LambdaForm::TRACE_INTERPRETER) {
		return interpretWithArgumentsTracing(argumentValues);
	}
	checkInvocationCounter();
	if (!LambdaForm::$assertionsDisabled && !(arityCheck(argumentValues))) {
		$throwNew($AssertionError);
	}
	$var($ObjectArray, values, $Arrays::copyOf(argumentValues, $nc(this->names)->length));
	for (int32_t i = $nc(argumentValues)->length; i < values->length; ++i) {
		values->set(i, $(interpretName(this->names->get(i), values)));
	}
	$var($Object, rv, (this->result < 0) ? ($Object*)nullptr : values->get(this->result));
	if (!LambdaForm::$assertionsDisabled && !(resultCheck(argumentValues, rv))) {
		$throwNew($AssertionError);
	}
	return rv;
}

$Object* LambdaForm::interpretName($LambdaForm$Name* name, $ObjectArray* values) {
	$useLocalObjectStack();
	if (LambdaForm::TRACE_INTERPRETER) {
		traceInterpreter("| interpretName"_s, $($nc(name)->debugString()), ($ObjectArray*)nullptr);
	}
	$var($ObjectArray, arguments, $Arrays::copyOf($nc(name)->arguments, $nc($nc(name)->arguments)->length, $getClass($ObjectArray)));
	for (int32_t i = 0; i < arguments->length; ++i) {
		$var($Object, a, arguments->get(i));
		if ($instanceOf($LambdaForm$Name, a)) {
			int32_t i2 = $cast($LambdaForm$Name, a)->index();
			if (!LambdaForm::$assertionsDisabled && !($equals($nc(this->names)->get(i2), a))) {
				$throwNew($AssertionError);
			}
			$assign(a, $nc(values)->get(i2));
			arguments->set(i, a);
		}
	}
	return $nc(name->function)->invokeWithArguments(arguments);
}

void LambdaForm::checkInvocationCounter() {
	if (LambdaForm::COMPILE_THRESHOLD != 0 && !forceInterpretation() && this->invocationCounter < LambdaForm::COMPILE_THRESHOLD) {
		++this->invocationCounter;
		if (this->invocationCounter >= LambdaForm::COMPILE_THRESHOLD) {
			compileToBytecode();
		}
	}
}

$Object* LambdaForm::interpretWithArgumentsTracing($ObjectArray* argumentValues) {
	$useLocalObjectStack();
	traceInterpreter("[ interpretWithArguments"_s, this, argumentValues);
	if (!forceInterpretation() && this->invocationCounter < LambdaForm::COMPILE_THRESHOLD) {
		int32_t ctr = this->invocationCounter++;
		traceInterpreter("| invocationCounter"_s, $($Integer::valueOf(ctr)));
		if (this->invocationCounter >= LambdaForm::COMPILE_THRESHOLD) {
			compileToBytecode();
		}
	}
	$var($Object, rval, nullptr);
	try {
		if (!LambdaForm::$assertionsDisabled && !(arityCheck(argumentValues))) {
			$throwNew($AssertionError);
		}
		$var($ObjectArray, values, $Arrays::copyOf(argumentValues, $nc(this->names)->length));
		for (int32_t i = $nc(argumentValues)->length; i < values->length; ++i) {
			values->set(i, $(interpretName(this->names->get(i), values)));
		}
		$assign(rval, (this->result < 0) ? ($Object*)nullptr : values->get(this->result));
	} catch ($Throwable& ex) {
		traceInterpreter("] throw =>"_s, ex);
		$throw(ex);
	}
	traceInterpreter("] return =>"_s, rval);
	return rval;
}

void LambdaForm::traceInterpreter($String* event, Object$* obj, $ObjectArray* args) {
	$init(LambdaForm);
	$useLocalObjectStack();
	if (LambdaForm::TRACE_INTERPRETER) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("LFI: "_s);
		var$0->append(event);
		var$0->append(" "_s);
		var$0->append(obj != nullptr ? $of(obj) : $of(""_s));
		var$0->append(args != nullptr && args->length != 0 ? $$of($Arrays::asList(args)) : $of(""_s));
		$nc($System::out)->println($$str(var$0));
	}
}

void LambdaForm::traceInterpreter($String* event, Object$* obj) {
	$init(LambdaForm);
	traceInterpreter(event, obj, ($ObjectArray*)nullptr);
}

bool LambdaForm::arityCheck($ObjectArray* argumentValues) {
	$useLocalObjectStack();
	if (!LambdaForm::$assertionsDisabled && !($nc(argumentValues)->length == this->arity$)) {
		$throwNew($AssertionError, $$of($str({$$str(this->arity$), "!="_s, $($Arrays::asList(argumentValues)), ".length"_s})));
	}
	if (!LambdaForm::$assertionsDisabled && !($instanceOf($MethodHandle, $nc(argumentValues)->get(0)))) {
		$throwNew($AssertionError, $$of($str({"not MH: "_s, argumentValues->get(0)})));
	}
	$var($MethodHandle, mh, $cast($MethodHandle, $nc(argumentValues)->get(0)));
	if (!LambdaForm::$assertionsDisabled && !($nc(mh)->internalForm() == this)) {
		$throwNew($AssertionError);
	}
	argumentTypesMatch($(basicTypeSignature()), argumentValues);
	return true;
}

bool LambdaForm::resultCheck($ObjectArray* argumentValues, Object$* result) {
	$useLocalObjectStack();
	$var($MethodHandle, mh, $cast($MethodHandle, $nc(argumentValues)->get(0)));
	$var($MethodType, mt, $nc(mh)->type());
	bool var$0 = !LambdaForm::$assertionsDisabled;
	if (var$0) {
		$var($LambdaForm$BasicType, var$1, returnType());
		var$0 = !(valueMatches(var$1, $$cast($Class, $nc(mt)->returnType()), result));
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return true;
}

bool LambdaForm::isEmpty() {
	if (this->result < 0) {
		return ($nc(this->names)->length == this->arity$);
	} else if (this->result == this->arity$ && $nc(this->names)->length == this->arity$ + 1) {
		return $nc(this->names->get(this->arity$))->isConstantZero();
	} else {
		return false;
	}
}

$String* LambdaForm::toString() {
	$useLocalObjectStack();
	$var($String, lambdaName, this->lambdaName());
	$var($StringBuilder, buf, $new($StringBuilder, $$str({lambdaName, "=Lambda("_s})));
	for (int32_t i = 0; i < $nc(this->names)->length; ++i) {
		if (i == this->arity$) {
			buf->append(")=>{"_s);
		}
		$var($LambdaForm$Name, n, this->names->get(i));
		if (i >= this->arity$) {
			buf->append("\n    "_s);
		}
		buf->append($($nc(n)->paramString()));
		if (i < this->arity$) {
			if (i + 1 < this->arity$) {
				buf->append(","_s);
			}
			continue;
		}
		buf->append("="_s)->append($(n->exprString()));
		buf->append(";"_s);
	}
	if (this->arity$ == this->names->length) {
		buf->append(")=>{"_s);
	}
	buf->append(this->result < 0 ? $of("void"_s) : $$of(this->names->get(this->result)))->append("}"_s);
	if (LambdaForm::TRACE_INTERPRETER) {
		buf->append(":"_s)->append($(basicTypeSignature()));
		buf->append("/"_s)->append(this->vmentry);
	}
	return buf->toString();
}

bool LambdaForm::equals(Object$* obj) {
	return $instanceOf(LambdaForm, obj) && equals($cast(LambdaForm, obj));
}

bool LambdaForm::equals(LambdaForm* that) {
	if (this->result != $nc(that)->result) {
		return false;
	}
	return $Arrays::equals(this->names, that->names);
}

int32_t LambdaForm::hashCode() {
	return this->result + 31 * $Arrays::hashCode(this->names);
}

$LambdaFormEditor* LambdaForm::editor() {
	return $LambdaFormEditor::lambdaFormEditor(this);
}

bool LambdaForm::contains($LambdaForm$Name* name) {
	int32_t pos = $nc(name)->index();
	if (pos >= 0) {
		return pos < $nc(this->names)->length && name->equals(this->names->get(pos));
	}
	for (int32_t i = this->arity$; i < $nc(this->names)->length; ++i) {
		if (name->equals(this->names->get(i))) {
			return true;
		}
	}
	return false;
}

$String* LambdaForm::basicTypeSignature($MethodType* type) {
	$init(LambdaForm);
	$useLocalObjectStack();
	int32_t params = $nc(type)->parameterCount();
	$var($chars, sig, $new($chars, params + 2));
	int32_t sigp = 0;
	while (sigp < params) {
		sig->set(sigp, $LambdaForm$BasicType::basicTypeChar($$cast($Class, type->parameterType(sigp++))));
	}
	sig->set(sigp++, u'_');
	sig->set(sigp++, $LambdaForm$BasicType::basicTypeChar($$cast($Class, type->returnType())));
	if (!LambdaForm::$assertionsDisabled && !(sigp == sig->length)) {
		$throwNew($AssertionError);
	}
	return $String::valueOf(sig);
}

$String* LambdaForm::shortenSignature($String* signature) {
	$init(LambdaForm);
	$useLocalObjectStack();
	int32_t NO_CHAR = -1;
	int32_t MIN_RUN = 3;
	int32_t c0 = 0;
	int32_t c1 = NO_CHAR;
	int32_t c1reps = 0;
	$var($StringBuilder, buf, nullptr);
	int32_t len = $nc(signature)->length();
	if (len < MIN_RUN) {
		return signature;
	}
	for (int32_t i = 0; i <= len; ++i) {
		if (c1 != NO_CHAR && !(u'A' <= c1 && c1 <= u'Z')) {
			if (buf != nullptr) {
				buf->append(signature, i - c1reps, len);
			}
			break;
		}
		c0 = c1;
		c1 = (i == len ? NO_CHAR : signature->charAt(i));
		if (c1 == c0) {
			++c1reps;
			continue;
		}
		int32_t c0reps = c1reps;
		c1reps = 1;
		if (c0reps < MIN_RUN) {
			if (buf != nullptr) {
				while (--c0reps >= 0) {
					buf->append((char16_t)c0);
				}
			}
			continue;
		}
		if (buf == nullptr) {
			$assign(buf, $$new($StringBuilder)->append(signature, 0, i - c0reps));
		}
		$nc(buf)->append((char16_t)c0)->append(c0reps);
	}
	return (buf == nullptr) ? signature : buf->toString();
}

int32_t LambdaForm::lastUseIndex($LambdaForm$Name* n) {
	int32_t ni = $nc(n)->index$;
	int32_t nmax = $nc(this->names)->length;
	if (!LambdaForm::$assertionsDisabled && !(this->names->get(ni) == n)) {
		$throwNew($AssertionError);
	}
	if (this->result == ni) {
		return nmax;
	}
	for (int32_t i = nmax; --i > ni;) {
		if ($nc(this->names->get(i))->lastUseIndex(n) >= 0) {
			return i;
		}
	}
	return -1;
}

int32_t LambdaForm::useCount($LambdaForm$Name* n) {
	int32_t count = (this->result == $nc(n)->index$) ? 1 : 0;
	int32_t i = $Math::max(n->index$ + 1, this->arity$);
	while (i < $nc(this->names)->length) {
		count += $nc(this->names->get(i++))->useCount(n);
	}
	return count;
}

$LambdaForm$Name* LambdaForm::argument(int32_t which, $LambdaForm$BasicType* type) {
	$init(LambdaForm);
	if (which >= LambdaForm::INTERNED_ARGUMENT_LIMIT) {
		return $new($LambdaForm$Name, which, type);
	}
	return $nc(LambdaForm::INTERNED_ARGUMENTS->get($nc(type)->ordinal()))->get(which);
}

$LambdaForm$Name* LambdaForm::internArgument($LambdaForm$Name* n) {
	$init(LambdaForm);
	if (!LambdaForm::$assertionsDisabled && !($nc(n)->isParam())) {
		$throwNew($AssertionError, $$of($str({"not param: "_s, n})));
	}
	if (!LambdaForm::$assertionsDisabled && !($nc(n)->index$ < LambdaForm::INTERNED_ARGUMENT_LIMIT)) {
		$throwNew($AssertionError);
	}
	if ($nc(n)->constraint != nullptr) {
		return n;
	}
	return argument(n->index$, n->type$);
}

$LambdaForm$NameArray* LambdaForm::arguments(int32_t extra, $MethodType* types) {
	$init(LambdaForm);
	$useLocalObjectStack();
	int32_t length = $nc(types)->parameterCount();
	$var($LambdaForm$NameArray, names, $new($LambdaForm$NameArray, length + extra));
	for (int32_t i = 0; i < length; ++i) {
		names->set(i, $(argument(i, $($LambdaForm$BasicType::basicType($$cast($Class, types->parameterType(i)))))));
	}
	return names;
}

LambdaForm* LambdaForm::identityForm($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	int32_t ord = $nc(type)->ordinal();
	$var(LambdaForm, form, LambdaForm::LF_identity->get(ord));
	if (form != nullptr) {
		return form;
	}
	createFormsFor(type);
	return LambdaForm::LF_identity->get(ord);
}

LambdaForm* LambdaForm::zeroForm($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	int32_t ord = $nc(type)->ordinal();
	$var(LambdaForm, form, LambdaForm::LF_zero->get(ord));
	if (form != nullptr) {
		return form;
	}
	createFormsFor(type);
	return LambdaForm::LF_zero->get(ord);
}

$LambdaForm$NamedFunction* LambdaForm::identity($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	int32_t ord = $nc(type)->ordinal();
	$var($LambdaForm$NamedFunction, function, LambdaForm::NF_identity->get(ord));
	if (function != nullptr) {
		return function;
	}
	createFormsFor(type);
	return LambdaForm::NF_identity->get(ord);
}

$LambdaForm$NamedFunction* LambdaForm::constantZero($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	int32_t ord = $nc(type)->ordinal();
	$var($LambdaForm$NamedFunction, function, LambdaForm::NF_zero->get(ord));
	if (function != nullptr) {
		return function;
	}
	createFormsFor(type);
	return LambdaForm::NF_zero->get(ord);
}

void LambdaForm::createFormsFor($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	$useLocalObjectStack();
	$init($MethodHandleStatics);
	$load($BoundMethodHandle);
	$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized($BoundMethodHandle::class$);
	$synchronized(LambdaForm::createFormsLock) {
		int32_t ord = $nc(type)->ordinal();
		$var(LambdaForm, idForm, LambdaForm::LF_identity->get(ord));
		if (idForm != nullptr) {
			return;
		}
		char16_t btChar = type->basicTypeChar();
		bool isVoid = (type == $LambdaForm$BasicType::V_TYPE);
		$Class* btClass = type->btClass;
		$var($MethodType, zeType, $MethodType::methodType(btClass));
		$var($MethodType, idType, (isVoid) ? zeType : $MethodType::methodType(btClass, btClass));
		$var($MemberName, idMem, $new($MemberName, LambdaForm::class$, $$str({"identity_"_s, $$str(btChar)}), idType, 6));
		$var($MemberName, zeMem, nullptr);
		try {
			$load($NoSuchMethodException);
			$assign(idMem, $nc(LambdaForm::IMPL_NAMES)->resolveOrFail(6, idMem, nullptr, -1, $NoSuchMethodException::class$));
			if (!isVoid) {
				$assign(zeMem, $new($MemberName, LambdaForm::class$, $$str({"zero_"_s, $$str(btChar)}), zeType, 6));
				$assign(zeMem, LambdaForm::IMPL_NAMES->resolveOrFail(6, zeMem, nullptr, -1, $NoSuchMethodException::class$));
			}
		} catch ($IllegalAccessException& ex) {
			$throw($($MethodHandleStatics::newInternalError(ex)));
		} catch ($NoSuchMethodException& ex) {
			$throw($($MethodHandleStatics::newInternalError(ex)));
		}
		$var($LambdaForm$NamedFunction, idFun, nullptr);
		$var(LambdaForm, zeForm, nullptr);
		$var($LambdaForm$NamedFunction, zeFun, nullptr);
		if (isVoid) {
			$var($LambdaForm$NameArray, idNames, $new($LambdaForm$NameArray, {$(argument(0, $LambdaForm$BasicType::L_TYPE))}));
			$init($LambdaForm$Kind);
			$assign(idForm, $new(LambdaForm, 1, idNames, LambdaForm::VOID_RESULT, $LambdaForm$Kind::IDENTITY));
			idForm->compileToBytecode();
			$assign(idFun, $new($LambdaForm$NamedFunction, idMem, $($SimpleMethodHandle::make($($nc(idMem)->getInvocationType()), idForm))));
			$assign(zeForm, idForm);
			$assign(zeFun, idFun);
		} else {
			$var($LambdaForm$NameArray, idNames, $new($LambdaForm$NameArray, {
				$(argument(0, $LambdaForm$BasicType::L_TYPE)),
				$(argument(1, type))
			}));
			$init($LambdaForm$Kind);
			$assign(idForm, $new(LambdaForm, 2, idNames, 1, $LambdaForm$Kind::IDENTITY));
			idForm->compileToBytecode();
			$init($MethodHandleImpl$Intrinsic);
			$assign(idFun, $new($LambdaForm$NamedFunction, idMem, $($MethodHandleImpl::makeIntrinsic($($SimpleMethodHandle::make($($nc(idMem)->getInvocationType()), idForm)), $MethodHandleImpl$Intrinsic::IDENTITY))));
			$var($Object, zeValue, $$nc($Wrapper::forBasicType(btChar))->zero());
			$var($LambdaForm$NameArray, zeNames, $new($LambdaForm$NameArray, {
				$(argument(0, $LambdaForm$BasicType::L_TYPE)),
				$$new($LambdaForm$Name, idFun, $$new($ObjectArray, {zeValue}))
			}));
			$assign(zeForm, $new(LambdaForm, 1, zeNames, 1, $LambdaForm$Kind::ZERO));
			zeForm->compileToBytecode();
			$assign(zeFun, $new($LambdaForm$NamedFunction, zeMem, $($MethodHandleImpl::makeIntrinsic($($SimpleMethodHandle::make($($nc(zeMem)->getInvocationType()), zeForm)), $MethodHandleImpl$Intrinsic::ZERO))));
		}
		LambdaForm::LF_zero->set(ord, zeForm);
		LambdaForm::NF_zero->set(ord, zeFun);
		LambdaForm::LF_identity->set(ord, idForm);
		LambdaForm::NF_identity->set(ord, idFun);
		if (!LambdaForm::$assertionsDisabled && !($nc(idFun)->isIdentity())) {
			$throwNew($AssertionError);
		}
		if (!LambdaForm::$assertionsDisabled && !($nc(zeFun)->isConstantZero())) {
			$throwNew($AssertionError);
		}
		if (!LambdaForm::$assertionsDisabled && !($$new($LambdaForm$Name, zeFun, $$new($ObjectArray, 0))->isConstantZero())) {
			$throwNew($AssertionError);
		}
	}
}

int32_t LambdaForm::identity_I(int32_t x) {
	$init(LambdaForm);
	return x;
}

int64_t LambdaForm::identity_J(int64_t x) {
	$init(LambdaForm);
	return x;
}

float LambdaForm::identity_F(float x) {
	$init(LambdaForm);
	return x;
}

double LambdaForm::identity_D(double x) {
	$init(LambdaForm);
	return x;
}

$Object* LambdaForm::identity_L(Object$* x) {
	$init(LambdaForm);
	return $of(x);
}

void LambdaForm::identity_V() {
	$init(LambdaForm);
	return;
}

int32_t LambdaForm::zero_I() {
	$init(LambdaForm);
	return 0;
}

int64_t LambdaForm::zero_J() {
	$init(LambdaForm);
	return 0;
}

float LambdaForm::zero_F() {
	$init(LambdaForm);
	return 0;
}

double LambdaForm::zero_D() {
	$init(LambdaForm);
	return 0;
}

$Object* LambdaForm::zero_L() {
	$init(LambdaForm);
	return nullptr;
}

void LambdaForm::clinit$($Class* clazz) {
	$useLocalObjectStack();
	LambdaForm::$assertionsDisabled = !LambdaForm::class$->desiredAssertionStatus();
	{
		$init($MethodHandleStatics);
		LambdaForm::COMPILE_THRESHOLD = $Math::max(-1, $MethodHandleStatics::COMPILE_THRESHOLD);
	}
	$init($LambdaForm$BasicType);
	$assignStatic(LambdaForm::INTERNED_ARGUMENTS, $new($LambdaForm$NameArray2, $LambdaForm$BasicType::ARG_TYPE_LIMIT, LambdaForm::INTERNED_ARGUMENT_LIMIT));
	{
		$var($LambdaForm$BasicTypeArray, arr$, $LambdaForm$BasicType::ARG_TYPES);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$LambdaForm$BasicType* type = arr$->get(i$);
			{
				int32_t ord = $nc(type)->ordinal();
				for (int32_t i = 0; i < $nc(LambdaForm::INTERNED_ARGUMENTS->get(ord))->length; ++i) {
					$nc(LambdaForm::INTERNED_ARGUMENTS->get(ord))->set(i, $$new($LambdaForm$Name, i, type));
				}
			}
		}
	}
	$assignStatic(LambdaForm::IMPL_NAMES, $MemberName::getFactory());
	$assignStatic(LambdaForm::LF_identity, $new($LambdaFormArray, $LambdaForm$BasicType::TYPE_LIMIT));
	$assignStatic(LambdaForm::LF_zero, $new($LambdaFormArray, $LambdaForm$BasicType::TYPE_LIMIT));
	$assignStatic(LambdaForm::NF_identity, $new($LambdaForm$NamedFunctionArray, $LambdaForm$BasicType::TYPE_LIMIT));
	$assignStatic(LambdaForm::NF_zero, $new($LambdaForm$NamedFunctionArray, $LambdaForm$BasicType::TYPE_LIMIT));
	$assignStatic(LambdaForm::createFormsLock, $new($Object));
	{
		if ($MethodHandleStatics::debugEnabled()) {
			$assignStatic(LambdaForm::DEBUG_NAME_COUNTERS, $new($HashMap));
			$assignStatic(LambdaForm::DEBUG_NAMES, $new($HashMap));
		} else {
			$assignStatic(LambdaForm::DEBUG_NAME_COUNTERS, nullptr);
			$assignStatic(LambdaForm::DEBUG_NAMES, nullptr);
		}
	}
	{
		$load($LambdaForm$Holder);
		$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized($LambdaForm$Holder::class$);
	}
	LambdaForm::TRACE_INTERPRETER = $MethodHandleStatics::TRACE_INTERPRETER;
}

LambdaForm::LambdaForm() {
}

$Class* LambdaForm::load$($String* name, bool initialize) {
	$CompoundAttribute namesfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute LF_FAILEDfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute LF_identityfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute LF_zerofieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute NF_identityfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute NF_zerofieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm, $assertionsDisabled)},
		{"arity", "I", nullptr, $FINAL, $field(LambdaForm, arity$)},
		{"result", "I", nullptr, $FINAL, $field(LambdaForm, result)},
		{"forceInline", "Z", nullptr, $FINAL, $field(LambdaForm, forceInline)},
		{"customized", "Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(LambdaForm, customized)},
		{"names", "[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $FINAL, $field(LambdaForm, names), namesfieldAnnotations$$},
		{"kind", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $FINAL, $field(LambdaForm, kind)},
		{"vmentry", "Ljava/lang/invoke/MemberName;", nullptr, 0, $field(LambdaForm, vmentry)},
		{"isCompiled", "Z", nullptr, $PRIVATE, $field(LambdaForm, isCompiled)},
		{"transformCache", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(LambdaForm, transformCache)},
		{"VOID_RESULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaForm, VOID_RESULT)},
		{"LAST_RESULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaForm, LAST_RESULT)},
		{"LF_FAILED", "Ljdk/internal/perf/PerfCounter;", nullptr, $PRIVATE | $STATIC, $staticField(LambdaForm, LF_FAILED), LF_FAILEDfieldAnnotations$$},
		{"COMPILE_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, COMPILE_THRESHOLD)},
		{"invocationCounter", "I", nullptr, $PRIVATE, $field(LambdaForm, invocationCounter)},
		{"INTERNED_ARGUMENT_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(LambdaForm, INTERNED_ARGUMENT_LIMIT)},
		{"INTERNED_ARGUMENTS", "[[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, INTERNED_ARGUMENTS)},
		{"IMPL_NAMES", "Ljava/lang/invoke/MemberName$Factory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, IMPL_NAMES)},
		{"LF_identity", "[Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, LF_identity), LF_identityfieldAnnotations$$},
		{"LF_zero", "[Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, LF_zero), LF_zerofieldAnnotations$$},
		{"NF_identity", "[Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, NF_identity), NF_identityfieldAnnotations$$},
		{"NF_zero", "[Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, NF_zero), NF_zerofieldAnnotations$$},
		{"createFormsLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, createFormsLock)},
		{"DEBUG_NAME_COUNTERS", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, DEBUG_NAME_COUNTERS)},
		{"DEBUG_NAMES", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/invoke/LambdaForm;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, DEBUG_NAMES)},
		{"TRACE_INTERPRETER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, TRACE_INTERPRETER)},
		{}
	};
	$CompoundAttribute interpretNamemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{"Ljdk/internal/vm/annotation/DontInline;", nullptr},
		{}
	};
	$CompoundAttribute interpretWithArgumentsmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{"Ljdk/internal/vm/annotation/DontInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;I)V", nullptr, 0, $method(LambdaForm, init$, void, int32_t, $LambdaForm$NameArray*, int32_t)},
		{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;ILjava/lang/invoke/LambdaForm$Kind;)V", nullptr, 0, $method(LambdaForm, init$, void, int32_t, $LambdaForm$NameArray*, int32_t, $LambdaForm$Kind*)},
		{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;IZLjava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(LambdaForm, init$, void, int32_t, $LambdaForm$NameArray*, int32_t, bool, $MethodHandle*)},
		{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;IZLjava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm$Kind;)V", nullptr, 0, $method(LambdaForm, init$, void, int32_t, $LambdaForm$NameArray*, int32_t, bool, $MethodHandle*, $LambdaForm$Kind*)},
		{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;)V", nullptr, 0, $method(LambdaForm, init$, void, int32_t, $LambdaForm$NameArray*)},
		{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;Ljava/lang/invoke/LambdaForm$Kind;)V", nullptr, 0, $method(LambdaForm, init$, void, int32_t, $LambdaForm$NameArray*, $LambdaForm$Kind*)},
		{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;ZLjava/lang/invoke/LambdaForm$Kind;)V", nullptr, 0, $method(LambdaForm, init$, void, int32_t, $LambdaForm$NameArray*, bool, $LambdaForm$Kind*)},
		{"<init>", "(Ljava/lang/invoke/MethodType;)V", nullptr, $PRIVATE, $method(LambdaForm, init$, void, $MethodType*)},
		{"argument", "(ILjava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm$Name;", nullptr, $STATIC, $staticMethod(LambdaForm, argument, $LambdaForm$Name*, int32_t, $LambdaForm$BasicType*)},
		{"argumentTypesMatch", "(Ljava/lang/String;[Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, argumentTypesMatch, bool, $String*, $ObjectArray*)},
		{"arguments", "(ILjava/lang/invoke/MethodType;)[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $STATIC, $staticMethod(LambdaForm, arguments, $LambdaForm$NameArray*, int32_t, $MethodType*)},
		{"arity", "()I", nullptr, 0, $virtualMethod(LambdaForm, arity, int32_t)},
		{"arityCheck", "([Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(LambdaForm, arityCheck, bool, $ObjectArray*)},
		{"associateWithDebugName", "(Ljava/lang/invoke/LambdaForm;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(LambdaForm, associateWithDebugName, void, LambdaForm*, $String*)},
		{"basicTypeSignature", "()Ljava/lang/String;", nullptr, $FINAL, $method(LambdaForm, basicTypeSignature, $String*)},
		{"basicTypeSignature", "(Ljava/lang/invoke/MethodType;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(LambdaForm, basicTypeSignature, $String*, $MethodType*)},
		{"buildEmptyNames", "(ILjava/lang/invoke/MethodType;Z)[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, buildEmptyNames, $LambdaForm$NameArray*, int32_t, $MethodType*, bool)},
		{"buildNames", "([Ljava/lang/invoke/LambdaForm$Name;[Ljava/lang/invoke/LambdaForm$Name;Ljava/lang/invoke/LambdaForm$Name;)[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, buildNames, $LambdaForm$NameArray*, $LambdaForm$NameArray*, $LambdaForm$NameArray*, $LambdaForm$Name*)},
		{"checkInt", "(Ljava/lang/Class;Ljava/lang/Object;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Object;)Z", $PRIVATE | $STATIC, $staticMethod(LambdaForm, checkInt, bool, $Class*, Object$*)},
		{"checkInvocationCounter", "()V", nullptr, $PRIVATE, $method(LambdaForm, checkInvocationCounter, void)},
		{"checkRef", "(Ljava/lang/Class;Ljava/lang/Object;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Object;)Z", $PRIVATE | $STATIC, $staticMethod(LambdaForm, checkRef, bool, $Class*, Object$*)},
		{"compileToBytecode", "()V", nullptr, 0, $virtualMethod(LambdaForm, compileToBytecode, void)},
		{"constantZero", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC, $staticMethod(LambdaForm, constantZero, $LambdaForm$NamedFunction*, $LambdaForm$BasicType*)},
		{"contains", "(Ljava/lang/invoke/LambdaForm$Name;)Z", nullptr, 0, $virtualMethod(LambdaForm, contains, bool, $LambdaForm$Name*)},
		{"createFormsFor", "(Ljava/lang/invoke/LambdaForm$BasicType;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, createFormsFor, void, $LambdaForm$BasicType*)},
		{"customize", "(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/LambdaForm;", nullptr, 0, $virtualMethod(LambdaForm, customize, LambdaForm*, $MethodHandle*)},
		{"debugNames", "()Z", nullptr, $STATIC, $staticMethod(LambdaForm, debugNames, bool)},
		{"editor", "()Ljava/lang/invoke/LambdaFormEditor;", nullptr, 0, $virtualMethod(LambdaForm, editor, $LambdaFormEditor*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LambdaForm, equals, bool, Object$*)},
		{"equals", "(Ljava/lang/invoke/LambdaForm;)Z", nullptr, $PUBLIC, $virtualMethod(LambdaForm, equals, bool, LambdaForm*)},
		{"expressionCount", "()I", nullptr, 0, $virtualMethod(LambdaForm, expressionCount, int32_t)},
		{"failedCompilationCounter", "()Ljdk/internal/perf/PerfCounter;", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, failedCompilationCounter, $PerfCounter*)},
		{"fixResult", "(I[Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, fixResult, int32_t, int32_t, $LambdaForm$NameArray*)},
		{"forceInterpretation", "()Z", nullptr, $PRIVATE, $method(LambdaForm, forceInterpretation, bool)},
		{"generateDebugName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(LambdaForm, generateDebugName, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(LambdaForm, hashCode, int32_t)},
		{"identity", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC, $staticMethod(LambdaForm, identity, $LambdaForm$NamedFunction*, $LambdaForm$BasicType*)},
		{"identityForm", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm;", nullptr, $STATIC, $staticMethod(LambdaForm, identityForm, LambdaForm*, $LambdaForm$BasicType*)},
		{"identity_D", "(D)D", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, identity_D, double, double)},
		{"identity_F", "(F)F", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, identity_F, float, float)},
		{"identity_I", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, identity_I, int32_t, int32_t)},
		{"identity_J", "(J)J", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, identity_J, int64_t, int64_t)},
		{"identity_L", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, identity_L, $Object*, Object$*)},
		{"identity_V", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, identity_V, void)},
		{"internArgument", "(Ljava/lang/invoke/LambdaForm$Name;)Ljava/lang/invoke/LambdaForm$Name;", nullptr, $STATIC, $staticMethod(LambdaForm, internArgument, $LambdaForm$Name*, $LambdaForm$Name*)},
		{"interpretName", "(Ljava/lang/invoke/LambdaForm$Name;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(LambdaForm, interpretName, $Object*, $LambdaForm$Name*, $ObjectArray*), "java.lang.Throwable", nullptr, interpretNamemethodAnnotations$$},
		{"interpretWithArguments", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $TRANSIENT, $virtualMethod(LambdaForm, interpretWithArguments, $Object*, $ObjectArray*), "java.lang.Throwable", nullptr, interpretWithArgumentsmethodAnnotations$$},
		{"interpretWithArgumentsTracing", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $TRANSIENT, $virtualMethod(LambdaForm, interpretWithArgumentsTracing, $Object*, $ObjectArray*), "java.lang.Throwable"},
		{"isEmpty", "()Z", nullptr, $PRIVATE, $method(LambdaForm, isEmpty, bool)},
		{"isGuardWithCatch", "(I)Z", nullptr, 0, $virtualMethod(LambdaForm, isGuardWithCatch, bool, int32_t)},
		{"isLoop", "(I)Z", nullptr, 0, $virtualMethod(LambdaForm, isLoop, bool, int32_t)},
		{"isMatchingIdiom", "(ILjava/lang/String;I)Z", nullptr, $PRIVATE, $method(LambdaForm, isMatchingIdiom, bool, int32_t, $String*, int32_t)},
		{"isSelectAlternative", "(I)Z", nullptr, 0, $virtualMethod(LambdaForm, isSelectAlternative, bool, int32_t)},
		{"isTableSwitch", "(I)Z", nullptr, 0, $virtualMethod(LambdaForm, isTableSwitch, bool, int32_t)},
		{"isTryFinally", "(I)Z", nullptr, 0, $virtualMethod(LambdaForm, isTryFinally, bool, int32_t)},
		{"isValidSignature", "(Ljava/lang/String;)Z", nullptr, $STATIC, $staticMethod(LambdaForm, isValidSignature, bool, $String*)},
		{"lambdaName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(LambdaForm, lambdaName, $String*)},
		{"lastUseIndex", "(Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, 0, $virtualMethod(LambdaForm, lastUseIndex, int32_t, $LambdaForm$Name*)},
		{"methodType", "()Ljava/lang/invoke/MethodType;", nullptr, 0, $virtualMethod(LambdaForm, methodType, $MethodType*)},
		{"nameRefsAreLegal", "()Z", nullptr, 0, $virtualMethod(LambdaForm, nameRefsAreLegal, bool)},
		{"namesOK", "(I[Ljava/lang/invoke/LambdaForm$Name;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, namesOK, bool, int32_t, $LambdaForm$NameArray*)},
		{"normalize", "()I", nullptr, $PRIVATE, $method(LambdaForm, normalize, int32_t)},
		{"parameter", "(I)Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0, $virtualMethod(LambdaForm, parameter, $LambdaForm$Name*, int32_t)},
		{"parameterConstraint", "(I)Ljava/lang/Object;", nullptr, 0, $virtualMethod(LambdaForm, parameterConstraint, $Object*, int32_t)},
		{"parameterType", "(I)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, 0, $virtualMethod(LambdaForm, parameterType, $LambdaForm$BasicType*, int32_t)},
		{"prepare", "()V", nullptr, $PUBLIC, $virtualMethod(LambdaForm, prepare, void)},
		{"resultCheck", "([Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(LambdaForm, resultCheck, bool, $ObjectArray*, Object$*)},
		{"returnType", "()Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, 0, $virtualMethod(LambdaForm, returnType, $LambdaForm$BasicType*)},
		{"shortenSignature", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(LambdaForm, shortenSignature, $String*, $String*)},
		{"signatureArity", "(Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(LambdaForm, signatureArity, int32_t, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LambdaForm, toString, $String*)},
		{"traceInterpreter", "(Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $STATIC | $TRANSIENT, $staticMethod(LambdaForm, traceInterpreter, void, $String*, Object$*, $ObjectArray*)},
		{"traceInterpreter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(LambdaForm, traceInterpreter, void, $String*, Object$*)},
		{"uncustomize", "()Ljava/lang/invoke/LambdaForm;", nullptr, 0, $virtualMethod(LambdaForm, uncustomize, LambdaForm*)},
		{"useCount", "(Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, 0, $virtualMethod(LambdaForm, useCount, int32_t, $LambdaForm$Name*)},
		{"valueMatches", "(Ljava/lang/invoke/LambdaForm$BasicType;Ljava/lang/Class;Ljava/lang/Object;)Z", "(Ljava/lang/invoke/LambdaForm$BasicType;Ljava/lang/Class<*>;Ljava/lang/Object;)Z", $PRIVATE | $STATIC, $staticMethod(LambdaForm, valueMatches, bool, $LambdaForm$BasicType*, $Class*, Object$*)},
		{"zeroForm", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm;", nullptr, $STATIC, $staticMethod(LambdaForm, zeroForm, LambdaForm*, $LambdaForm$BasicType*)},
		{"zero_D", "()D", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, zero_D, double)},
		{"zero_F", "()F", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, zero_F, float)},
		{"zero_I", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, zero_I, int32_t)},
		{"zero_J", "()J", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, zero_J, int64_t)},
		{"zero_L", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm, zero_L, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.LambdaForm$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"java.lang.invoke.LambdaForm$Holder", "java.lang.invoke.LambdaForm", "Holder", $FINAL},
		{"java.lang.invoke.LambdaForm$Compiled", "java.lang.invoke.LambdaForm", "Compiled", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"java.lang.invoke.LambdaForm$Name", "java.lang.invoke.LambdaForm", "Name", $STATIC | $FINAL},
		{"java.lang.invoke.LambdaForm$NamedFunction", "java.lang.invoke.LambdaForm", "NamedFunction", $STATIC},
		{"java.lang.invoke.LambdaForm$Kind", "java.lang.invoke.LambdaForm", "Kind", $STATIC | $FINAL | $ENUM},
		{"java.lang.invoke.LambdaForm$BasicType", "java.lang.invoke.LambdaForm", "BasicType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.LambdaForm",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.LambdaForm$1,java.lang.invoke.LambdaForm$Holder,java.lang.invoke.LambdaForm$Compiled,java.lang.invoke.LambdaForm$Name,java.lang.invoke.LambdaForm$NamedFunction,java.lang.invoke.LambdaForm$Kind,java.lang.invoke.LambdaForm$BasicType"
	};
	$loadClass(LambdaForm, name, initialize, &classInfo$$, LambdaForm::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaForm);
	});
	return class$;
}

$Class* LambdaForm::class$ = nullptr;

		} // invoke
	} // lang
} // java
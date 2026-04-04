#include <java/lang/invoke/StringConcatFactory.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InternalError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/ConstantCallSite.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/StringConcatException.h>
#include <java/lang/invoke/StringConcatFactory$1.h>
#include <java/lang/invoke/StringConcatFactory$2.h>
#include <java/lang/invoke/StringConcatFactory$3.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/function/Function.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef BOOLEAN_STRINGIFIER
#undef CHAR_STRINGIFIER
#undef DOUBLE_STRINGIFIER
#undef FLOAT_STRINGIFIER
#undef INITIAL_CODER
#undef INT_STRINGIFIER
#undef JLA
#undef LONG_STRINGIFIER
#undef MAX_INDY_CONCAT_ARG_SLOTS
#undef MIX
#undef MIXERS
#undef NEW_ARRAY
#undef NEW_ARRAY_SUFFIX
#undef NEW_STRING
#undef NEW_STRINGIFIER
#undef NULL_PREPEND
#undef NULL_PREPENDERS
#undef OBJECT_STRINGIFIER
#undef PREPEND
#undef PREPENDERS
#undef PRIVATE
#undef SIMPLE_CONCAT
#undef TAG_ARG
#undef TAG_CONST
#undef TYPE

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Short = ::java::lang::Short;
using $CallSite = ::java::lang::invoke::CallSite;
using $ConstantCallSite = ::java::lang::invoke::ConstantCallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $StringConcatException = ::java::lang::invoke::StringConcatException;
using $StringConcatFactory$1 = ::java::lang::invoke::StringConcatFactory$1;
using $StringConcatFactory$2 = ::java::lang::invoke::StringConcatFactory$2;
using $StringConcatFactory$3 = ::java::lang::invoke::StringConcatFactory$3;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $Function = ::java::util::function::Function;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace lang {
		namespace invoke {

bool StringConcatFactory::$assertionsDisabled = false;
$JavaLangAccess* StringConcatFactory::JLA = nullptr;
$Function* StringConcatFactory::PREPEND = nullptr;
$Function* StringConcatFactory::NULL_PREPEND = nullptr;
$Function* StringConcatFactory::MIX = nullptr;
$MethodHandle* StringConcatFactory::SIMPLE_CONCAT = nullptr;
$MethodHandle* StringConcatFactory::NEW_STRING = nullptr;
$MethodHandle* StringConcatFactory::NEW_ARRAY_SUFFIX = nullptr;
$MethodHandle* StringConcatFactory::NEW_ARRAY = nullptr;
$MethodHandle* StringConcatFactory::OBJECT_STRINGIFIER = nullptr;
$MethodHandle* StringConcatFactory::FLOAT_STRINGIFIER = nullptr;
$MethodHandle* StringConcatFactory::DOUBLE_STRINGIFIER = nullptr;
$MethodHandle* StringConcatFactory::INT_STRINGIFIER = nullptr;
$MethodHandle* StringConcatFactory::LONG_STRINGIFIER = nullptr;
$MethodHandle* StringConcatFactory::CHAR_STRINGIFIER = nullptr;
$MethodHandle* StringConcatFactory::BOOLEAN_STRINGIFIER = nullptr;
$MethodHandle* StringConcatFactory::NEW_STRINGIFIER = nullptr;
$ConcurrentMap* StringConcatFactory::PREPENDERS = nullptr;
$ConcurrentMap* StringConcatFactory::NULL_PREPENDERS = nullptr;
$ConcurrentMap* StringConcatFactory::MIXERS = nullptr;
int64_t StringConcatFactory::INITIAL_CODER = 0;

$CallSite* StringConcatFactory::makeConcat($MethodHandles$Lookup* lookup, $String* name, $MethodType* concatType) {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($String, recipe, "\u0001"_s->repeat($nc(concatType)->parameterCount()));
	return makeConcatWithConstants(lookup, name, concatType, recipe, $$new($ObjectArray, 0));
}

$CallSite* StringConcatFactory::makeConcatWithConstants($MethodHandles$Lookup* lookup, $String* name, $MethodType* concatType, $String* recipe, $ObjectArray* constants) {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$Objects::requireNonNull(lookup, "Lookup is null"_s);
	$Objects::requireNonNull(name, "Name is null"_s);
	$Objects::requireNonNull(concatType, "Concat type is null"_s);
	$Objects::requireNonNull(constants, "Constants are null"_s);
	{
		$var($ObjectArray, arr$, constants);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				$Objects::requireNonNull(o, "Cannot accept null constants"_s);
			}
		}
	}
	if (($nc(lookup)->lookupModes() & $MethodHandles$Lookup::PRIVATE) == 0) {
		$throwNew($StringConcatException, $$str({"Invalid caller: "_s, $($nc(lookup->lookupClass())->getName())}));
	}
	$var($List, elements, parseRecipe(concatType, recipe, constants));
	if (!$$sure($Class, $nc(concatType)->returnType())->isAssignableFrom($String::class$)) {
		$throwNew($StringConcatException, $$str({"The return type should be compatible with String, but it is "_s, $$cast($Class, concatType->returnType())}));
	}
	if (concatType->parameterSlotCount() > StringConcatFactory::MAX_INDY_CONCAT_ARG_SLOTS) {
		$throwNew($StringConcatException, $$str({"Too many concat argument slots: "_s, $$str(concatType->parameterSlotCount()), ", can only accept "_s, $$str(StringConcatFactory::MAX_INDY_CONCAT_ARG_SLOTS)}));
	}
	try {
		return $new($ConstantCallSite, $($$nc(generateMHInlineCopy(concatType, elements))->viewAsType(concatType, true)));
	} catch ($Error& e) {
		$throw(e);
	} catch ($Throwable& t) {
		$throwNew($StringConcatException, "Generator failed"_s, t);
	}
	$shouldNotReachHere();
}

$List* StringConcatFactory::parseRecipe($MethodType* concatType, $String* recipe, $ObjectArray* constants) {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$Objects::requireNonNull(recipe, "Recipe is null"_s);
	$var($List, elements, $new($ArrayList));
	int32_t cCount = 0;
	int32_t oCount = 0;
	$var($StringBuilder, acc, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(recipe)->length(); ++i) {
		char16_t c = recipe->charAt(i);
		if (c == StringConcatFactory::TAG_CONST) {
			if (cCount == $nc(constants)->length) {
				$throw($(constantMismatch(constants, cCount)));
			}
			acc->append(constants->get(cCount++));
		} else if (c == StringConcatFactory::TAG_ARG) {
			if (acc->length() > 0) {
				elements->add($(acc->toString()));
				acc->setLength(0);
			}
			elements->add(nullptr);
			++oCount;
		} else {
			acc->append(c);
		}
	}
	if (acc->length() > 0) {
		elements->add($(acc->toString()));
	}
	if (oCount != $nc(concatType)->parameterCount()) {
		$throw($(argumentMismatch(concatType, oCount)));
	}
	if (cCount < $nc(constants)->length) {
		$throw($(constantMismatch(constants, cCount)));
	}
	return elements;
}

$StringConcatException* StringConcatFactory::argumentMismatch($MethodType* concatType, int32_t oCount) {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	return $new($StringConcatException, $$str({"Mismatched number of concat arguments: recipe wants "_s, $$str(oCount), " arguments, but signature provides "_s, $$str($nc(concatType)->parameterCount())}));
}

$StringConcatException* StringConcatFactory::constantMismatch($ObjectArray* constants, int32_t cCount) {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	return $new($StringConcatException, $$str({"Mismatched number of concat constants: recipe wants "_s, $$str(cCount), " constants, but only "_s, $$str($nc(constants)->length), " are passed"_s}));
}

$MethodHandle* StringConcatFactory::generateMHInlineCopy($MethodType* mt, $List* elements) {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	if ($nc(elements)->size() == 1) {
		$var($String, s0, $cast($String, elements->get(0)));
		if (s0 == nullptr) {
			return unaryConcat($$cast($Class, $nc(mt)->parameterType(0)));
		} else {
			return $MethodHandles::insertArguments($(unaryConcat($Object::class$)), 0, $$new($ObjectArray, {s0}));
		}
	}
	if (elements->size() == 2) {
		$var($String, s0, $cast($String, elements->get(0)));
		$var($String, s1, $cast($String, elements->get(1)));
		bool var$1 = $nc(mt)->parameterCount() == 2;
		bool var$0 = var$1 && !$$sure($Class, mt->parameterType(0))->isPrimitive();
		if (var$0 && !$$sure($Class, mt->parameterType(1))->isPrimitive() && s0 == nullptr && s1 == nullptr) {
			return simpleConcat();
		} else if (mt->parameterCount() == 1) {
			$var($String, constant, nullptr);
			int32_t constIdx = 0;
			if (s1 == nullptr) {
				$assign(constant, s0);
				constIdx = 0;
			} else {
				$assign(constant, s1);
				constIdx = 1;
			}
			if ($nc(constant)->isEmpty()) {
				return unaryConcat($$cast($Class, mt->parameterType(0)));
			} else if (!$$sure($Class, mt->parameterType(0))->isPrimitive()) {
				return $MethodHandles::insertArguments($(simpleConcat()), constIdx, $$new($ObjectArray, {constant}));
			}
		}
	}
	$var($ClassArray, ptypes, $cast($ClassArray, $$nc($nc(mt)->erase())->parameterArray()));
	$var($MethodHandleArray, filters, nullptr);
	for (int32_t i = 0; i < $nc(ptypes)->length; ++i) {
		$var($MethodHandle, filter, stringifierFor(ptypes->get(i)));
		if (filter != nullptr) {
			if (filters == nullptr) {
				$assign(filters, $new($MethodHandleArray, ptypes->length));
			}
			$nc(filters)->set(i, filter);
			ptypes->set(i, $String::class$);
		}
	}
	$var($MethodHandle, mh, $MethodHandles::dropArguments($(newString()), 2, ptypes));
	int64_t initialLengthCoder = StringConcatFactory::INITIAL_CODER;
	$var($String, constant, nullptr);
	int32_t pos = 0;
	{
		$var($Iterator, i$, elements->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, el, $cast($String, i$->next()));
			if (el != nullptr) {
				initialLengthCoder = $nc(StringConcatFactory::JLA)->stringConcatMix(initialLengthCoder, el);
				if (!StringConcatFactory::$assertionsDisabled && !(constant == nullptr)) {
					$throwNew($AssertionError);
				}
				$assign(constant, el);
			} else {
				$assign(mh, $MethodHandles::filterArgumentsWithCombiner(mh, 1, $(prepender(constant, ptypes->get(pos))), $$new($ints, {
					1,
					0,
					2 + pos
				})));
				$assign(constant, nullptr);
				++pos;
			}
		}
	}
	$var($MethodHandle, newArrayCombinator, nullptr);
	if (constant != nullptr) {
		initialLengthCoder -= constant->length();
		$assign(newArrayCombinator, newArrayWithSuffix(constant));
	} else {
		$assign(newArrayCombinator, newArray());
	}
	$assign(mh, $MethodHandles::foldArgumentsWithCombiner(mh, 0, newArrayCombinator, $$new($ints, {1})));
	pos = -1;
	$var($MethodHandle, mix, nullptr);
	{
		$var($Iterator, i$, elements->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, el, $cast($String, i$->next()));
			if (el == nullptr) {
				if (pos >= 0) {
					$assign(mh, $MethodHandles::filterArgumentsWithCombiner(mh, 0, mix, $$new($ints, {
						0,
						1 + pos
					})));
				}
				$Class* argClass = ptypes->get(++pos);
				$assign(mix, mixer(argClass));
			}
		}
	}
	if (pos >= 0) {
		$assign(mix, $MethodHandles::insertArguments(mix, 0, $$new($ObjectArray, {$($Long::valueOf(initialLengthCoder))})));
		$assign(mh, $MethodHandles::foldArgumentsWithCombiner(mh, 0, mix, $$new($ints, {1 + pos})));
	} else {
		$assign(mh, $MethodHandles::insertArguments(mh, 0, $$new($ObjectArray, {$($Long::valueOf(initialLengthCoder))})));
	}
	if (filters != nullptr) {
		$assign(mh, $MethodHandles::filterArguments(mh, 0, filters));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::prepender($String* prefix, $Class* cl) {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	if (prefix == nullptr) {
		return $cast($MethodHandle, $nc(StringConcatFactory::NULL_PREPENDERS)->computeIfAbsent(cl, StringConcatFactory::NULL_PREPEND));
	}
	return $MethodHandles::insertArguments($$cast($MethodHandle, $nc(StringConcatFactory::PREPENDERS)->computeIfAbsent(cl, StringConcatFactory::PREPEND)), 3, $$new($ObjectArray, {prefix}));
}

$MethodHandle* StringConcatFactory::mixer($Class* cl) {
	$init(StringConcatFactory);
	return $cast($MethodHandle, $nc(StringConcatFactory::MIXERS)->computeIfAbsent(cl, StringConcatFactory::MIX));
}

$MethodHandle* StringConcatFactory::simpleConcat() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::SIMPLE_CONCAT);
	if (mh == nullptr) {
		$var($MethodHandle, simpleConcat, $nc(StringConcatFactory::JLA)->stringConcatHelper("simpleConcat"_s, $($MethodType::methodType($String::class$, $Object::class$, $$new($ClassArray, {$Object::class$})))));
		$assignStatic(StringConcatFactory::SIMPLE_CONCAT, $assign(mh, $nc(simpleConcat)->rebind()));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::newString() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::NEW_STRING);
	if (mh == nullptr) {
		$var($MethodHandle, newString, $nc(StringConcatFactory::JLA)->stringConcatHelper("newString"_s, $($MethodType::methodType($String::class$, $getClass($bytes), $$new($ClassArray, {$Long::TYPE})))));
		$assignStatic(StringConcatFactory::NEW_STRING, $assign(mh, $nc(newString)->rebind()));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::newArrayWithSuffix($String* suffix) {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::NEW_ARRAY_SUFFIX);
	if (mh == nullptr) {
		$var($MethodHandle, newArrayWithSuffix, $nc(StringConcatFactory::JLA)->stringConcatHelper("newArrayWithSuffix"_s, $($MethodType::methodType($getClass($bytes), $String::class$, $$new($ClassArray, {$Long::TYPE})))));
		$assignStatic(StringConcatFactory::NEW_ARRAY_SUFFIX, $assign(mh, $nc(newArrayWithSuffix)->rebind()));
	}
	return $MethodHandles::insertArguments(mh, 0, $$new($ObjectArray, {suffix}));
}

$MethodHandle* StringConcatFactory::newArray() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::NEW_ARRAY);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::NEW_ARRAY, $assign(mh, $nc(StringConcatFactory::JLA)->stringConcatHelper("newArray"_s, $($MethodType::methodType($getClass($bytes), $Long::TYPE)))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::objectStringifier() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::OBJECT_STRINGIFIER);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::OBJECT_STRINGIFIER, $assign(mh, $nc(StringConcatFactory::JLA)->stringConcatHelper("stringOf"_s, $($MethodType::methodType($String::class$, $Object::class$)))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::floatStringifier() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::FLOAT_STRINGIFIER);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::FLOAT_STRINGIFIER, $assign(mh, lookupStatic($($MethodHandles::publicLookup()), $String::class$, "valueOf"_s, $String::class$, $$new($ClassArray, {$Float::TYPE}))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::doubleStringifier() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::DOUBLE_STRINGIFIER);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::DOUBLE_STRINGIFIER, $assign(mh, lookupStatic($($MethodHandles::publicLookup()), $String::class$, "valueOf"_s, $String::class$, $$new($ClassArray, {$Double::TYPE}))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::intStringifier() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::INT_STRINGIFIER);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::INT_STRINGIFIER, $assign(mh, lookupStatic($($MethodHandles::publicLookup()), $String::class$, "valueOf"_s, $String::class$, $$new($ClassArray, {$Integer::TYPE}))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::longStringifier() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::LONG_STRINGIFIER);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::LONG_STRINGIFIER, $assign(mh, lookupStatic($($MethodHandles::publicLookup()), $String::class$, "valueOf"_s, $String::class$, $$new($ClassArray, {$Long::TYPE}))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::charStringifier() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::CHAR_STRINGIFIER);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::CHAR_STRINGIFIER, $assign(mh, lookupStatic($($MethodHandles::publicLookup()), $String::class$, "valueOf"_s, $String::class$, $$new($ClassArray, {$Character::TYPE}))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::booleanStringifier() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::BOOLEAN_STRINGIFIER);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::BOOLEAN_STRINGIFIER, $assign(mh, lookupStatic($($MethodHandles::publicLookup()), $String::class$, "valueOf"_s, $String::class$, $$new($ClassArray, {$Boolean::TYPE}))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::newStringifier() {
	$init(StringConcatFactory);
	$useLocalObjectStack();
	$var($MethodHandle, mh, StringConcatFactory::NEW_STRINGIFIER);
	if (mh == nullptr) {
		$assignStatic(StringConcatFactory::NEW_STRINGIFIER, $assign(mh, $nc(StringConcatFactory::JLA)->stringConcatHelper("newStringOf"_s, $($MethodType::methodType($String::class$, $Object::class$)))));
	}
	return mh;
}

$MethodHandle* StringConcatFactory::unaryConcat($Class* cl) {
	$init(StringConcatFactory);
	if (!$nc(cl)->isPrimitive()) {
		return newStringifier();
	} else if (cl == $Integer::TYPE || cl == $Short::TYPE || cl == $Byte::TYPE) {
		return intStringifier();
	} else if (cl == $Long::TYPE) {
		return longStringifier();
	} else if (cl == $Character::TYPE) {
		return charStringifier();
	} else if (cl == $Boolean::TYPE) {
		return booleanStringifier();
	} else if (cl == $Float::TYPE) {
		return floatStringifier();
	} else if (cl == $Double::TYPE) {
		return doubleStringifier();
	} else {
		$throwNew($InternalError, $$str({"Unhandled type for unary concatenation: "_s, cl}));
	}
}

$MethodHandle* StringConcatFactory::stringifierFor($Class* t) {
	$init(StringConcatFactory);
	if (t == $Object::class$) {
		return objectStringifier();
	} else if (t == $Float::TYPE) {
		return floatStringifier();
	} else if (t == $Double::TYPE) {
		return doubleStringifier();
	}
	return nullptr;
}

$MethodHandle* StringConcatFactory::lookupStatic($MethodHandles$Lookup* lookup, $Class* refc, $String* name, $Class* rtype, $ClassArray* ptypes) {
	$init(StringConcatFactory);
	try {
		return $nc(lookup)->findStatic(refc, name, $($MethodType::methodType(rtype, ptypes)));
	} catch ($NoSuchMethodException& e) {
		$throwNew($AssertionError, $of(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

void StringConcatFactory::init$() {
}

void StringConcatFactory::clinit$($Class* clazz) {
	StringConcatFactory::$assertionsDisabled = !StringConcatFactory::class$->desiredAssertionStatus();
	$assignStatic(StringConcatFactory::JLA, $SharedSecrets::getJavaLangAccess());
	$assignStatic(StringConcatFactory::PREPEND, $new($StringConcatFactory$1));
	$assignStatic(StringConcatFactory::NULL_PREPEND, $new($StringConcatFactory$2));
	$assignStatic(StringConcatFactory::MIX, $new($StringConcatFactory$3));
	{
		StringConcatFactory::INITIAL_CODER = $nc(StringConcatFactory::JLA)->stringConcatInitialCoder();
		$assignStatic(StringConcatFactory::PREPENDERS, $new($ConcurrentHashMap));
		$assignStatic(StringConcatFactory::NULL_PREPENDERS, $new($ConcurrentHashMap));
		$assignStatic(StringConcatFactory::MIXERS, $new($ConcurrentHashMap));
	}
}

StringConcatFactory::StringConcatFactory() {
}

$Class* StringConcatFactory::load$($String* name, bool initialize) {
	$CompoundAttribute SIMPLE_CONCATfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute NEW_STRINGfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute NEW_ARRAY_SUFFIXfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute NEW_ARRAYfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute OBJECT_STRINGIFIERfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute FLOAT_STRINGIFIERfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute DOUBLE_STRINGIFIERfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute INT_STRINGIFIERfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute LONG_STRINGIFIERfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute CHAR_STRINGIFIERfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute BOOLEAN_STRINGIFIERfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute NEW_STRINGIFIERfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StringConcatFactory, $assertionsDisabled)},
		{"TAG_ARG", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatFactory, TAG_ARG)},
		{"TAG_CONST", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatFactory, TAG_CONST)},
		{"MAX_INDY_CONCAT_ARG_SLOTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatFactory, MAX_INDY_CONCAT_ARG_SLOTS)},
		{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatFactory, JLA)},
		{"PREPEND", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatFactory, PREPEND)},
		{"NULL_PREPEND", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatFactory, NULL_PREPEND)},
		{"MIX", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatFactory, MIX)},
		{"SIMPLE_CONCAT", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, SIMPLE_CONCAT), SIMPLE_CONCATfieldAnnotations$$},
		{"NEW_STRING", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, NEW_STRING), NEW_STRINGfieldAnnotations$$},
		{"NEW_ARRAY_SUFFIX", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, NEW_ARRAY_SUFFIX), NEW_ARRAY_SUFFIXfieldAnnotations$$},
		{"NEW_ARRAY", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, NEW_ARRAY), NEW_ARRAYfieldAnnotations$$},
		{"OBJECT_STRINGIFIER", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, OBJECT_STRINGIFIER), OBJECT_STRINGIFIERfieldAnnotations$$},
		{"FLOAT_STRINGIFIER", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, FLOAT_STRINGIFIER), FLOAT_STRINGIFIERfieldAnnotations$$},
		{"DOUBLE_STRINGIFIER", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, DOUBLE_STRINGIFIER), DOUBLE_STRINGIFIERfieldAnnotations$$},
		{"INT_STRINGIFIER", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, INT_STRINGIFIER), INT_STRINGIFIERfieldAnnotations$$},
		{"LONG_STRINGIFIER", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, LONG_STRINGIFIER), LONG_STRINGIFIERfieldAnnotations$$},
		{"CHAR_STRINGIFIER", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, CHAR_STRINGIFIER), CHAR_STRINGIFIERfieldAnnotations$$},
		{"BOOLEAN_STRINGIFIER", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, BOOLEAN_STRINGIFIER), BOOLEAN_STRINGIFIERfieldAnnotations$$},
		{"NEW_STRINGIFIER", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(StringConcatFactory, NEW_STRINGIFIER), NEW_STRINGIFIERfieldAnnotations$$},
		{"PREPENDERS", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatFactory, PREPENDERS)},
		{"NULL_PREPENDERS", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatFactory, NULL_PREPENDERS)},
		{"MIXERS", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatFactory, MIXERS)},
		{"INITIAL_CODER", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatFactory, INITIAL_CODER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StringConcatFactory, init$, void)},
		{"argumentMismatch", "(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/StringConcatException;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, argumentMismatch, $StringConcatException*, $MethodType*, int32_t)},
		{"booleanStringifier", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, booleanStringifier, $MethodHandle*)},
		{"charStringifier", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, charStringifier, $MethodHandle*)},
		{"constantMismatch", "([Ljava/lang/Object;I)Ljava/lang/invoke/StringConcatException;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, constantMismatch, $StringConcatException*, $ObjectArray*, int32_t)},
		{"doubleStringifier", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, doubleStringifier, $MethodHandle*)},
		{"floatStringifier", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, floatStringifier, $MethodHandle*)},
		{"generateMHInlineCopy", "(Ljava/lang/invoke/MethodType;Ljava/util/List;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodType;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, generateMHInlineCopy, $MethodHandle*, $MethodType*, $List*)},
		{"intStringifier", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, intStringifier, $MethodHandle*)},
		{"longStringifier", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, longStringifier, $MethodHandle*)},
		{"lookupStatic", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(StringConcatFactory, lookupStatic, $MethodHandle*, $MethodHandles$Lookup*, $Class*, $String*, $Class*, $ClassArray*)},
		{"makeConcat", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringConcatFactory, makeConcat, $CallSite*, $MethodHandles$Lookup*, $String*, $MethodType*), "java.lang.invoke.StringConcatException"},
		{"makeConcatWithConstants", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(StringConcatFactory, makeConcatWithConstants, $CallSite*, $MethodHandles$Lookup*, $String*, $MethodType*, $String*, $ObjectArray*), "java.lang.invoke.StringConcatException"},
		{"mixer", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, mixer, $MethodHandle*, $Class*)},
		{"newArray", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, newArray, $MethodHandle*)},
		{"newArrayWithSuffix", "(Ljava/lang/String;)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, newArrayWithSuffix, $MethodHandle*, $String*)},
		{"newString", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, newString, $MethodHandle*)},
		{"newStringifier", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, newStringifier, $MethodHandle*)},
		{"objectStringifier", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, objectStringifier, $MethodHandle*)},
		{"parseRecipe", "(Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/List;", "(Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, parseRecipe, $List*, $MethodType*, $String*, $ObjectArray*), "java.lang.invoke.StringConcatException"},
		{"prepender", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, prepender, $MethodHandle*, $String*, $Class*)},
		{"simpleConcat", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, simpleConcat, $MethodHandle*)},
		{"stringifierFor", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, stringifierFor, $MethodHandle*, $Class*)},
		{"unaryConcat", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $staticMethod(StringConcatFactory, unaryConcat, $MethodHandle*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.StringConcatFactory$3", nullptr, nullptr, 0},
		{"java.lang.invoke.StringConcatFactory$2", nullptr, nullptr, 0},
		{"java.lang.invoke.StringConcatFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.invoke.StringConcatFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.StringConcatFactory$3,java.lang.invoke.StringConcatFactory$2,java.lang.invoke.StringConcatFactory$1"
	};
	$loadClass(StringConcatFactory, name, initialize, &classInfo$$, StringConcatFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StringConcatFactory);
	});
	return class$;
}

$Class* StringConcatFactory::class$ = nullptr;

		} // invoke
	} // lang
} // java
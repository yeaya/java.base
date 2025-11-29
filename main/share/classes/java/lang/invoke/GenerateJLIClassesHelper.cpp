#include <java/lang/invoke/GenerateJLIClassesHelper.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/BoundMethodHandle$Specializer.h>
#include <java/lang/invoke/BoundMethodHandle$SpeciesData.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/ClassSpecializer$Factory.h>
#include <java/lang/invoke/ClassSpecializer$SpeciesData.h>
#include <java/lang/invoke/ClassSpecializer.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/GenerateJLIClassesHelper$HolderClassBuilder.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/Invokers.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm$Kind.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ACC_FINAL
#undef ACC_PRIVATE
#undef ACC_SUPER
#undef AF_GETFIELD
#undef AF_LIMIT
#undef BASIC_FORMS_HOLDER
#undef BMH_SPECIES_PREFIX
#undef COMPUTE_FRAMES
#undef COMPUTE_MAXS
#undef DELEGATING_HOLDER
#undef DIRECT_HOLDER
#undef DIRECT_INVOKE_INTERFACE
#undef DIRECT_INVOKE_SPECIAL
#undef DIRECT_INVOKE_SPECIAL_IFC
#undef DIRECT_INVOKE_STATIC
#undef DIRECT_INVOKE_STATIC_INIT
#undef DIRECT_INVOKE_VIRTUAL
#undef DIRECT_NEW_INVOKE_SPECIAL
#undef DMH_METHOD_TYPE_MAP
#undef GENERIC
#undef INVOKERS_HOLDER
#undef INVOKERS_HOLDER_CLASS_NAME
#undef INVOKER_SUPER_NAME
#undef LF_DELEGATE
#undef LF_EX_INVOKER
#undef LF_EX_LINKER
#undef LF_GEN_INVOKER
#undef LF_GEN_LINKER
#undef LF_REBIND
#undef SPECIALIZER
#undef VOID

using $LambdaForm$BasicTypeArray = $Array<::java::lang::invoke::LambdaForm$BasicType>;
using $LambdaFormArray = $Array<::java::lang::invoke::LambdaForm>;
using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $WrapperArray = $Array<::sun::invoke::util::Wrapper>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $BoundMethodHandle$Specializer = ::java::lang::invoke::BoundMethodHandle$Specializer;
using $BoundMethodHandle$SpeciesData = ::java::lang::invoke::BoundMethodHandle$SpeciesData;
using $ClassSpecializer$Factory = ::java::lang::invoke::ClassSpecializer$Factory;
using $ClassSpecializer$SpeciesData = ::java::lang::invoke::ClassSpecializer$SpeciesData;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;
using $GenerateJLIClassesHelper$HolderClassBuilder = ::java::lang::invoke::GenerateJLIClassesHelper$HolderClassBuilder;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $Invokers = ::java::lang::invoke::Invokers;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaForm$Kind = ::java::lang::invoke::LambdaForm$Kind;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;
using $ClassWriter = ::jdk::internal::org::objectweb::asm$::ClassWriter;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

class GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0 : public $Function {
	$class(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(GenerateJLIClassesHelper::lambda$generateHolderClasses$0($cast($String, line)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0::*)()>(&GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0::load$($String* name, bool initialize) {
	$loadClass(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0::class$ = nullptr;

class GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1 : public $Consumer {
	$class(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($GenerateJLIClassesHelper$HolderClassBuilder* builder) {
		$set(this, builder, builder);
	}
	virtual void accept(Object$* parts) override {
		GenerateJLIClassesHelper::lambda$generateHolderClasses$1(builder, $cast($StringArray, parts));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1>());
	}
	$GenerateJLIClassesHelper$HolderClassBuilder* builder = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::fieldInfos[2] = {
	{"builder", "Ljava/lang/invoke/GenerateJLIClassesHelper$HolderClassBuilder;", nullptr, $PUBLIC, $field(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1, builder)},
	{}
};
$MethodInfo GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/GenerateJLIClassesHelper$HolderClassBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::*)($GenerateJLIClassesHelper$HolderClassBuilder*)>(&GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::load$($String* name, bool initialize) {
	$loadClass(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::class$ = nullptr;

$FieldInfo _GenerateJLIClassesHelper_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GenerateJLIClassesHelper, $assertionsDisabled)},
	{"DMH_METHOD_TYPE_MAP", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $STATIC | $FINAL, $staticField(GenerateJLIClassesHelper, DMH_METHOD_TYPE_MAP)},
	{"DIRECT_HOLDER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GenerateJLIClassesHelper, DIRECT_HOLDER)},
	{"DELEGATING_HOLDER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GenerateJLIClassesHelper, DELEGATING_HOLDER)},
	{"BASIC_FORMS_HOLDER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GenerateJLIClassesHelper, BASIC_FORMS_HOLDER)},
	{"INVOKERS_HOLDER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GenerateJLIClassesHelper, INVOKERS_HOLDER)},
	{"INVOKERS_HOLDER_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GenerateJLIClassesHelper, INVOKERS_HOLDER_CLASS_NAME)},
	{"BMH_SPECIES_PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GenerateJLIClassesHelper, BMH_SPECIES_PREFIX)},
	{}
};

$MethodInfo _GenerateJLIClassesHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GenerateJLIClassesHelper::*)()>(&GenerateJLIClassesHelper::init$))},
	{"generateBasicFormsClassBytes", "(Ljava/lang/String;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($String*)>(&GenerateJLIClassesHelper::generateBasicFormsClassBytes))},
	{"generateCodeBytesForLFs", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/invoke/LambdaForm;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($String*,$StringArray*,$LambdaFormArray*)>(&GenerateJLIClassesHelper::generateCodeBytesForLFs))},
	{"generateConcreteBMHClassBytes", "(Ljava/lang/String;)Ljava/util/Map$Entry;", "(Ljava/lang/String;)Ljava/util/Map$Entry<Ljava/lang/String;[B>;", $STATIC, $method(static_cast<$Map$Entry*(*)($String*)>(&GenerateJLIClassesHelper::generateConcreteBMHClassBytes))},
	{"generateDelegatingMethodHandleHolderClassBytes", "(Ljava/lang/String;[Ljava/lang/invoke/MethodType;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($String*,$MethodTypeArray*)>(&GenerateJLIClassesHelper::generateDelegatingMethodHandleHolderClassBytes))},
	{"generateDirectMethodHandleHolderClassBytes", "(Ljava/lang/String;[Ljava/lang/invoke/MethodType;[I)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($String*,$MethodTypeArray*,$ints*)>(&GenerateJLIClassesHelper::generateDirectMethodHandleHolderClassBytes))},
	{"generateHolderClasses", "(Ljava/util/stream/Stream;)Ljava/util/Map;", "(Ljava/util/stream/Stream<Ljava/lang/String;>;)Ljava/util/Map<Ljava/lang/String;[B>;", $STATIC, $method(static_cast<$Map*(*)($Stream*)>(&GenerateJLIClassesHelper::generateHolderClasses))},
	{"generateInvokersHolderClassBytes", "(Ljava/lang/String;[Ljava/lang/invoke/MethodType;[Ljava/lang/invoke/MethodType;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($String*,$MethodTypeArray*,$MethodTypeArray*)>(&GenerateJLIClassesHelper::generateInvokersHolderClassBytes))},
	{"lambda$generateHolderClasses$0", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)($String*)>(&GenerateJLIClassesHelper::lambda$generateHolderClasses$0))},
	{"lambda$generateHolderClasses$1", "(Ljava/lang/invoke/GenerateJLIClassesHelper$HolderClassBuilder;[Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($GenerateJLIClassesHelper$HolderClassBuilder*,$StringArray*)>(&GenerateJLIClassesHelper::lambda$generateHolderClasses$1))},
	{"makeDelegateFor", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)($MethodType*)>(&GenerateJLIClassesHelper::makeDelegateFor))},
	{"makeReinvokerFor", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)($MethodType*)>(&GenerateJLIClassesHelper::makeReinvokerFor))},
	{}
};

$InnerClassInfo _GenerateJLIClassesHelper_InnerClassesInfo_[] = {
	{"java.lang.invoke.GenerateJLIClassesHelper$HolderClassBuilder", "java.lang.invoke.GenerateJLIClassesHelper", "HolderClassBuilder", $STATIC},
	{}
};

$ClassInfo _GenerateJLIClassesHelper_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.GenerateJLIClassesHelper",
	"java.lang.Object",
	nullptr,
	_GenerateJLIClassesHelper_FieldInfo_,
	_GenerateJLIClassesHelper_MethodInfo_,
	nullptr,
	nullptr,
	_GenerateJLIClassesHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.GenerateJLIClassesHelper$HolderClassBuilder"
};

$Object* allocate$GenerateJLIClassesHelper($Class* clazz) {
	return $of($alloc(GenerateJLIClassesHelper));
}

bool GenerateJLIClassesHelper::$assertionsDisabled = false;
$Map* GenerateJLIClassesHelper::DMH_METHOD_TYPE_MAP = nullptr;
$String* GenerateJLIClassesHelper::DIRECT_HOLDER = nullptr;
$String* GenerateJLIClassesHelper::DELEGATING_HOLDER = nullptr;
$String* GenerateJLIClassesHelper::BASIC_FORMS_HOLDER = nullptr;
$String* GenerateJLIClassesHelper::INVOKERS_HOLDER = nullptr;
$String* GenerateJLIClassesHelper::INVOKERS_HOLDER_CLASS_NAME = nullptr;
$String* GenerateJLIClassesHelper::BMH_SPECIES_PREFIX = nullptr;

void GenerateJLIClassesHelper::init$() {
}

$Map* GenerateJLIClassesHelper::generateHolderClasses($Stream* traces) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(traces);
	$var($GenerateJLIClassesHelper$HolderClassBuilder, builder, $new($GenerateJLIClassesHelper$HolderClassBuilder));
	$nc($(traces->map(static_cast<$Function*>($$new(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0)))))->forEach(static_cast<$Consumer*>($$new(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1, builder)));
	return builder->build();
}

$bytes* GenerateJLIClassesHelper::generateBasicFormsClassBytes($String* className) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, forms, $new($ArrayList));
	$var($ArrayList, names, $new($ArrayList));
	$var($HashSet, dedupSet, $new($HashSet));
	{
		$var($LambdaForm$BasicTypeArray, arr$, $LambdaForm$BasicType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$LambdaForm$BasicType* type = arr$->get(i$);
			{
				$var($LambdaForm, zero, $LambdaForm::zeroForm(type));
				$var($String, name, $str({$nc(zero)->kind->defaultLambdaName, "_"_s, $$str($nc($(zero->returnType()))->basicTypeChar())}));
				if (dedupSet->add(name)) {
					names->add(name);
					forms->add(zero);
				}
				$var($LambdaForm, identity, $LambdaForm::identityForm(type));
				$assign(name, $str({$nc(identity)->kind->defaultLambdaName, "_"_s, $$str($nc($(identity->returnType()))->basicTypeChar())}));
				if (dedupSet->add(name)) {
					names->add(name);
					forms->add(identity);
				}
			}
		}
	}
	$var($String, var$0, className);
	$var($StringArray, var$1, $fcast($StringArray, names->toArray($$new($StringArray, 0))));
	return generateCodeBytesForLFs(var$0, var$1, $fcast($LambdaFormArray, $(forms->toArray($$new($LambdaFormArray, 0)))));
}

$bytes* GenerateJLIClassesHelper::generateDirectMethodHandleHolderClassBytes($String* className, $MethodTypeArray* methodTypes, $ints* types) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, forms, $new($ArrayList));
	$var($ArrayList, names, $new($ArrayList));
	for (int32_t i = 0; i < $nc(methodTypes)->length; ++i) {
		if ($nc(types)->get(i) == 0 || $nc(types)->get(i) == 4) {
			bool var$0 = $nc(methodTypes->get(i))->parameterCount() < 1;
			if (var$0 || $cast($Class, $nc(methodTypes->get(i))->parameterType(0)) != $Object::class$) {
				$throwNew($InternalError, $$str({"Invalid method type for "_s, (types->get(i) == 0 ? "invokeVirtual"_s : "invokeInterface"_s), " DMH, needs at least two leading reference arguments: "_s, methodTypes->get(i)}));
			}
		}
		$var($LambdaForm, form, $DirectMethodHandle::makePreparedLambdaForm(methodTypes->get(i), $nc(types)->get(i)));
		forms->add(form);
		names->add($nc(form)->kind->defaultLambdaName);
	}
	{
		$var($WrapperArray, arr$, $Wrapper::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Wrapper* wrapper = arr$->get(i$);
			{
				if (wrapper == $Wrapper::VOID) {
					continue;
				}
				for (int8_t b = $DirectMethodHandle::AF_GETFIELD; b < $DirectMethodHandle::AF_LIMIT; ++b) {
					int32_t ftype = $DirectMethodHandle::ftypeKind($nc(wrapper)->primitiveType());
					$var($LambdaForm, form, $DirectMethodHandle::makePreparedFieldLambdaForm(b, false, ftype));
					$init($LambdaForm$Kind);
					if ($nc(form)->kind != $LambdaForm$Kind::GENERIC) {
						forms->add(form);
						names->add(form->kind->defaultLambdaName);
					}
					$assign(form, $DirectMethodHandle::makePreparedFieldLambdaForm(b, true, ftype));
					if ($nc(form)->kind != $LambdaForm$Kind::GENERIC) {
						forms->add(form);
						names->add(form->kind->defaultLambdaName);
					}
				}
			}
		}
	}
	$var($String, var$1, className);
	$var($StringArray, var$2, $fcast($StringArray, names->toArray($$new($StringArray, 0))));
	return generateCodeBytesForLFs(var$1, var$2, $fcast($LambdaFormArray, $(forms->toArray($$new($LambdaFormArray, 0)))));
}

$bytes* GenerateJLIClassesHelper::generateDelegatingMethodHandleHolderClassBytes($String* className, $MethodTypeArray* methodTypes) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	$var($HashSet, dedupSet, $new($HashSet));
	$var($ArrayList, forms, $new($ArrayList));
	$var($ArrayList, names, $new($ArrayList));
	for (int32_t i = 0; i < $nc(methodTypes)->length; ++i) {
		if (dedupSet->add(methodTypes->get(i))) {
			$var($LambdaForm, reinvoker, makeReinvokerFor(methodTypes->get(i)));
			forms->add(reinvoker);
			$var($String, speciesSig, $cast($String, $nc($($BoundMethodHandle::speciesDataFor(reinvoker)))->key()));
			if (!GenerateJLIClassesHelper::$assertionsDisabled && !($nc(speciesSig)->equals("L"_s))) {
				$throwNew($AssertionError);
			}
			names->add($$str({$nc(reinvoker)->kind->defaultLambdaName, "_"_s, speciesSig}));
			$var($LambdaForm, delegate, makeDelegateFor(methodTypes->get(i)));
			forms->add(delegate);
			names->add($nc(delegate)->kind->defaultLambdaName);
		}
	}
	$var($String, var$0, className);
	$var($StringArray, var$1, $fcast($StringArray, names->toArray($$new($StringArray, 0))));
	return generateCodeBytesForLFs(var$0, var$1, $fcast($LambdaFormArray, $(forms->toArray($$new($LambdaFormArray, 0)))));
}

$bytes* GenerateJLIClassesHelper::generateInvokersHolderClassBytes($String* className, $MethodTypeArray* invokerMethodTypes, $MethodTypeArray* callSiteMethodTypes) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	$var($HashSet, dedupSet, $new($HashSet));
	$var($ArrayList, forms, $new($ArrayList));
	$var($ArrayList, names, $new($ArrayList));
	$var($ints, types, $new($ints, {
		$MethodTypeForm::LF_EX_LINKER,
		$MethodTypeForm::LF_EX_INVOKER,
		$MethodTypeForm::LF_GEN_LINKER,
		$MethodTypeForm::LF_GEN_INVOKER
	}));
	for (int32_t i = 0; i < $nc(invokerMethodTypes)->length; ++i) {
		if (dedupSet->add(invokerMethodTypes->get(i))) {
			{
				$var($ints, arr$, types);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					int32_t type = arr$->get(i$);
					{
						$var($LambdaForm, invokerForm, $Invokers::invokeHandleForm(invokerMethodTypes->get(i), false, type));
						forms->add(invokerForm);
						names->add($nc(invokerForm)->kind->defaultLambdaName);
					}
				}
			}
		}
	}
	$assign(dedupSet, $new($HashSet));
	for (int32_t i = 0; i < $nc(callSiteMethodTypes)->length; ++i) {
		if (dedupSet->add(callSiteMethodTypes->get(i))) {
			$var($LambdaForm, callSiteForm, $Invokers::callSiteForm(callSiteMethodTypes->get(i), true));
			forms->add(callSiteForm);
			names->add($nc(callSiteForm)->kind->defaultLambdaName);
			$var($LambdaForm, methodHandleForm, $Invokers::callSiteForm(callSiteMethodTypes->get(i), false));
			forms->add(methodHandleForm);
			names->add($nc(methodHandleForm)->kind->defaultLambdaName);
		}
	}
	$var($String, var$0, className);
	$var($StringArray, var$1, $fcast($StringArray, names->toArray($$new($StringArray, 0))));
	return generateCodeBytesForLFs(var$0, var$1, $fcast($LambdaFormArray, $(forms->toArray($$new($LambdaFormArray, 0)))));
}

$bytes* GenerateJLIClassesHelper::generateCodeBytesForLFs($String* className, $StringArray* names, $LambdaFormArray* forms) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	$var($ClassWriter, cw, $new($ClassWriter, $ClassWriter::COMPUTE_MAXS + $ClassWriter::COMPUTE_FRAMES));
	$init($InvokerBytecodeGenerator);
	cw->visit($Opcodes::V1_8, $Opcodes::ACC_PRIVATE + $Opcodes::ACC_FINAL + $Opcodes::ACC_SUPER, className, nullptr, $InvokerBytecodeGenerator::INVOKER_SUPER_NAME, nullptr);
	cw->visitSource($($nc(className)->substring(className->lastIndexOf((int32_t)u'/') + 1)), nullptr);
	for (int32_t i = 0; i < $nc(forms)->length; ++i) {
		$var($InvokerBytecodeGenerator, g, $new($InvokerBytecodeGenerator, className, $nc(names)->get(i), forms->get(i), $($nc(forms->get(i))->methodType())));
		g->setClassWriter(cw);
		g->addMethod();
	}
	return cw->toByteArray();
}

$LambdaForm* GenerateJLIClassesHelper::makeReinvokerFor($MethodType* type) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	$var($MethodHandle, emptyHandle, $MethodHandles::empty(type));
	$var($MethodHandle, var$0, emptyHandle);
	$var($Object, var$1, $of($BoundMethodHandle::speciesData_L()));
	return $DelegatingMethodHandle::makeReinvokerForm(var$0, $MethodTypeForm::LF_REBIND, var$1, $($nc($($BoundMethodHandle::speciesData_L()))->getterFunction(0)));
}

$LambdaForm* GenerateJLIClassesHelper::makeDelegateFor($MethodType* type) {
	$init(GenerateJLIClassesHelper);
	$var($MethodHandle, handle, $MethodHandles::empty(type));
	$load($DelegatingMethodHandle);
	$init($DelegatingMethodHandle);
	return $DelegatingMethodHandle::makeReinvokerForm(handle, $MethodTypeForm::LF_DELEGATE, $DelegatingMethodHandle::class$, $DelegatingMethodHandle::NF_getTarget);
}

$Map$Entry* GenerateJLIClassesHelper::generateConcreteBMHClassBytes($String* types) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	{
		$var($chars, arr$, $nc(types)->toCharArray());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			{
				if (!$LambdaForm$BasicType::isArgBasicTypeChar(c)) {
					$throwNew($IllegalArgumentException, "All characters must correspond to a basic field type: LIJFD"_s);
				}
			}
		}
	}
	$init($BoundMethodHandle);
	$var($BoundMethodHandle$SpeciesData, species, $cast($BoundMethodHandle$SpeciesData, $nc($BoundMethodHandle::SPECIALIZER)->findSpecies(types)));
	$var($String, className, $nc($nc(species)->speciesCode())->getName());
	$var($ClassSpecializer$Factory, factory, $nc($BoundMethodHandle::SPECIALIZER)->factory());
	$var($bytes, code, $nc(factory)->generateConcreteSpeciesCodeFile(className, species));
	return $Map::entry($($nc(className)->replace(u'.', u'/')), code);
}

void GenerateJLIClassesHelper::lambda$generateHolderClasses$1($GenerateJLIClassesHelper$HolderClassBuilder* builder, $StringArray* parts) {
	$init(GenerateJLIClassesHelper);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s12863$, $nc(parts)->get(0));
		int32_t tmp12863$ = -1;
		switch ($nc(s12863$)->hashCode()) {
		case (int32_t)0xD71EFA2F:
			{
				if (s12863$->equals("[SPECIES_RESOLVE]"_s)) {
					tmp12863$ = 0;
				}
				break;
			}
		case (int32_t)0xDBD2A5FB:
			{
				if (s12863$->equals("[LF_RESOLVE]"_s)) {
					tmp12863$ = 1;
				}
				break;
			}
		}
		{
			$var($String, methodType, nullptr)
			switch (tmp12863$) {
			case 0:
				{
					if (!GenerateJLIClassesHelper::$assertionsDisabled && !(parts->length >= 2)) {
						$throwNew($AssertionError);
					}
					if ($nc(parts->get(1))->startsWith(GenerateJLIClassesHelper::BMH_SPECIES_PREFIX)) {
						$var($String, species, $nc(parts->get(1))->substring($nc(GenerateJLIClassesHelper::BMH_SPECIES_PREFIX)->length()));
						if (!"L"_s->equals(species)) {
							$nc(builder)->addSpeciesType(species);
						}
					}
					break;
				}
			case 1:
				{
					if (!GenerateJLIClassesHelper::$assertionsDisabled && !(parts->length > 3)) {
						$throwNew($AssertionError);
					}
					$assign(methodType, parts->get(3));
					if ($nc(parts->get(1))->equals(GenerateJLIClassesHelper::INVOKERS_HOLDER_CLASS_NAME)) {
						bool var$0 = "linkToTargetMethod"_s->equals(parts->get(2));
						if (var$0 || "linkToCallSite"_s->equals(parts->get(2))) {
							$nc(builder)->addCallSiteType(methodType);
						} else {
							$nc(builder)->addInvokerType(methodType);
						}
					} else if ($nc(parts->get(1))->contains("DirectMethodHandle"_s)) {
						$var($String, dmh, parts->get(2));
						if ($nc(GenerateJLIClassesHelper::DMH_METHOD_TYPE_MAP)->containsKey(dmh)) {
							$nc(builder)->addDMHMethodType(dmh, methodType);
						}
					}
					break;
				}
			default:
				{
					break;
				}
			}
		}
	}
}

$StringArray* GenerateJLIClassesHelper::lambda$generateHolderClasses$0($String* line) {
	$init(GenerateJLIClassesHelper);
	return $nc(line)->split(" "_s);
}

void clinit$GenerateJLIClassesHelper($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(GenerateJLIClassesHelper::DIRECT_HOLDER, "java/lang/invoke/DirectMethodHandle$Holder"_s);
	$assignStatic(GenerateJLIClassesHelper::DELEGATING_HOLDER, "java/lang/invoke/DelegatingMethodHandle$Holder"_s);
	$assignStatic(GenerateJLIClassesHelper::BASIC_FORMS_HOLDER, "java/lang/invoke/LambdaForm$Holder"_s);
	$assignStatic(GenerateJLIClassesHelper::INVOKERS_HOLDER, "java/lang/invoke/Invokers$Holder"_s);
	$assignStatic(GenerateJLIClassesHelper::BMH_SPECIES_PREFIX, "java.lang.invoke.BoundMethodHandle$Species_"_s);
	GenerateJLIClassesHelper::$assertionsDisabled = !GenerateJLIClassesHelper::class$->desiredAssertionStatus();
	$init($LambdaForm$Kind);
	$var($Object, var$0, $of($LambdaForm$Kind::DIRECT_INVOKE_VIRTUAL->methodName));
	$var($Object, var$1, $of($Integer::valueOf(0)));
	$var($Object, var$2, $of($LambdaForm$Kind::DIRECT_INVOKE_STATIC->methodName));
	$var($Object, var$3, $of($Integer::valueOf(1)));
	$var($Object, var$4, $of($LambdaForm$Kind::DIRECT_INVOKE_SPECIAL->methodName));
	$var($Object, var$5, $of($Integer::valueOf(2)));
	$var($Object, var$6, $of($LambdaForm$Kind::DIRECT_NEW_INVOKE_SPECIAL->methodName));
	$var($Object, var$7, $of($Integer::valueOf(3)));
	$var($Object, var$8, $of($LambdaForm$Kind::DIRECT_INVOKE_INTERFACE->methodName));
	$var($Object, var$9, $of($Integer::valueOf(4)));
	$var($Object, var$10, $of($LambdaForm$Kind::DIRECT_INVOKE_STATIC_INIT->methodName));
	$var($Object, var$11, $of($Integer::valueOf(5)));
	$var($Object, var$12, $of($LambdaForm$Kind::DIRECT_INVOKE_SPECIAL_IFC->methodName));
	$assignStatic(GenerateJLIClassesHelper::DMH_METHOD_TYPE_MAP, $Map::of(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, $($Integer::valueOf(20))));
	$assignStatic(GenerateJLIClassesHelper::INVOKERS_HOLDER_CLASS_NAME, $nc(GenerateJLIClassesHelper::INVOKERS_HOLDER)->replace(u'/', u'.'));
}

GenerateJLIClassesHelper::GenerateJLIClassesHelper() {
}

$Class* GenerateJLIClassesHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0::classInfo$.name)) {
			return GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$0::load$(name, initialize);
		}
		if (name->equals(GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::classInfo$.name)) {
			return GenerateJLIClassesHelper$$Lambda$lambda$generateHolderClasses$1$1::load$(name, initialize);
		}
	}
	$loadClass(GenerateJLIClassesHelper, name, initialize, &_GenerateJLIClassesHelper_ClassInfo_, clinit$GenerateJLIClassesHelper, allocate$GenerateJLIClassesHelper);
	return class$;
}

$Class* GenerateJLIClassesHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java
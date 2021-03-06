/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Howaajin. All rights reserved.
 *  Licensed under the MIT License. See License in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

#pragma once

#include "CoreMinimal.h"

class UEdGraph;
class SGraphEditor;
class UEdGraphNode;
class UEdGraphPin;
class FGraphFormatterStage;

DECLARE_DELEGATE_RetVal(UEdGraph*, FGetGraphDelegate);
DECLARE_DELEGATE_RetVal(SGraphEditor*, FGetGraphEditorDelegate);
DECLARE_DELEGATE_RetVal_OneParam(FVector2D, FCalculateNodeBoundDelegate, UEdGraphNode*);
DECLARE_DELEGATE_RetVal_OneParam(FVector2D, FOffsetCalculatorDelegate, UEdGraphPin*);
DECLARE_DELEGATE_RetVal(TUniquePtr<FGraphFormatterStage>, FGetOrderingStageDelegate);

struct FFormatterDelegates
{
	FCalculateNodeBoundDelegate BoundCalculator;
	FGetGraphDelegate GetGraphDelegate;
	FGetGraphEditorDelegate GetGraphEditorDelegate;
	FOffsetCalculatorDelegate OffsetCalculator;
};

/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
KiRiPlugInAudioProcessorEditor::KiRiPlugInAudioProcessorEditor (KiRiPlugInAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    mGainSlider.setSliderStyle (Slider::SliderStyle::LinearVertical);
    mGainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 50, 20);
    mGainSlider.setRange(0.0f, 1.0f, 0.01f);
    mGainSlider.setValue(0.5f);
    addAndMakeVisible(mGainSlider);
     
    setSize (200, 300);
}

KiRiPlugInAudioProcessorEditor::~KiRiPlugInAudioProcessorEditor()
{

}

//==============================================================================
void KiRiPlugInAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(Colours::black);

}

void KiRiPlugInAudioProcessorEditor::resized()
{
    mGainSlider.setBounds(getWidth() / 2 -50 , getHeight() /2 - 75, 100, 150);
}

#include "Effect.h"
#include "_config.h"
#include "_shader.h"
using namespace ffglex;

static ffglqs::PluginInstance p = ffglqs::Effect::CreatePlugin< Effect >({ 
		PLUGIN_ID,
		PLUGIN_NAME 
	} );

Effect::Effect()
{
	SetFragmentShader( fshader );
	AddParam( ffglqs::ParamRange::Create( "colorTemp", 6500.0f, ffglqs::ParamRange::Range(2000.0f,14750.0f) ) );
	SetParamDisplayName( 0, "Temperature", true );
}

Effect::~Effect()
{
}

FFResult Effect::SetFloatParameter( unsigned int dwIndex, float value )
{
	GetParam( "colorTemp" ).get()->SetValue( floor( value / 50 ) * 50 );

	return FF_SUCCESS;
}

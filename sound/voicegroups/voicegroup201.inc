	.align 2
voicegroup201:: @am using placeholder voices for sounds until I find the real sound
	voice_keysplit_all voicegroup196 @universal drums
	voice_keysplit voicegroup005, KeySplitTable1 @piano
	voice_directsound 60, 0, DirectSoundWaveData_steinway_b_piano, 255, 255, 0, 99 @bright piano
	voice_keysplit voicegroup005, KeySplitTable1 @honky tonk
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 255, 0, 99 @harpsichord
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 255, 0, 99 @clavi
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 255, 0, 99 @celeste
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 255, 0, 99 @glockenspiel
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 255, 0, 99 @music box
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 255, 0, 99 @vibraphone
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 255, 0, 99 @marimba
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 255, 0, 99 @xylophone
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 255, 0, 99 @dulcimer
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_low, 255, 249, 0, 165 @organ
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_low, 255, 249, 0, 165 @organ
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_low, 255, 249, 0, 165 @organ
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_low, 255, 249, 0, 165 @organ
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_low, 255, 249, 0, 165 @organ
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_accordion, 255, 249, 0, 165 @accordion
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_accordion, 255, 249, 0, 165 @harmonica
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_accordion_duplicate, 255, 249, 0, 165 @accordion
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 255, 0, 99 @nylon guitar
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 255, 0, 99 @steel guitar TODO
	voice_directsound 60, 0, DirectSoundWaveData_jazz_guitar, 255, 255, 0, 99 @jazz guitar
	voice_directsound 60, 0, DirectSoundWaveData_clean_guitar, 255, 255, 0, 99 @clean electric guitar
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 255, 0, 99 @muted electric guitar TODO
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 255, 0, 99 @overdrive
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 255, 0, 99 @distortion
	voice_directsound 60, 0, DirectSoundWaveData_unused_guitar_separates_power_chord, 255, 165, 154, 165 @harmonics TODO
	voice_directsound 60, 0, DirectSoundWaveData_trinity_30303_mega_bass, 255, 255, 0, 99 @acoustic bass
	voice_directsound 60, 0, DirectSoundWaveData_fingered_bass, 255, 255, 0, 99 @finger bass
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 188 @picked bass
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 188 @fretless bass
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_slap_bass, 255, 253, 0, 188 @slap bass 1
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_slap_bass, 255, 253, 0, 188 @slap bass 2
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 255, 0, 99 @synth bass 1
	voice_directsound 60, 0, DirectSoundWaveData_synth_bass, 255, 255, 0, 99 @synth bass 2
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_string_ensemble_84, 255, 255, 0, 99 @violin
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_string_ensemble_84, 255, 255, 0, 99 @viola
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_string_ensemble_60, 255, 255, 0, 99 @cello
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_string_ensemble_60, 255, 255, 0, 99 @contrabass
	voice_keysplit voicegroup006, KeySplitTable2 @tremolo strings
	voice_keysplit voicegroup006, KeySplitTable2 @pizz. strings
	voice_keysplit voicegroup006, KeySplitTable1 @orchestra strings
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 255, 0, 99 @timpani
	voice_keysplit voicegroup199, KeySplitTable2 @string ens. 1
	voice_keysplit voicegroup199, KeySplitTable2 @string ens. 2
	voice_keysplit voicegroup199, KeySplitTable2 @synth strings 1
	voice_keysplit voicegroup199, KeySplitTable2 @synth strings 2
	voice_keysplit voicegroup200, KeySplitTable2 @aahs
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 255, 255, 0 @oohs
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 255, 255, 0 @synth voice
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_orchestra_snare, 255, 255, 0, 99 @orchestra hit TODO
	voice_keysplit voicegroup007, KeySplitTable6 @trumpet
	voice_keysplit voicegroup008, KeySplitTable2 @trombone
	voice_keysplit voicegroup008, KeySplitTable2 @tuba
	voice_directsound 60, 0, DirectSoundWaveData_muted_trumpet, 255, 255, 0, 99 @muted trumpet
	voice_keysplit voicegroup009, KeySplitTable5 @french horn
	voice_keysplit voicegroup198, KeySplitTable6 @brass
	voice_directsound 60, 0, DirectSoundWaveData_synth_brass_1, 255, 255, 0, 99 @synth brass
	voice_directsound 60, 0, DirectSoundWaveData_synth_brass_2, 255, 255, 0, 99 @synth brass
	voice_directsound 60, 0, DirectSoundWaveData_soprano_sax, 255, 255, 0, 99 @soprano sax
	voice_keysplit voicegroup193, KeySplitTable2 @alto sax
	voice_keysplit voicegroup194, KeySplitTable4 @tenor sax
	voice_keysplit voicegroup195, KeySplitTable4 @bari sax
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 255, 255, 0, 165 @oboe
	voice_directsound 60, 0, DirectSoundWaveData_unused_sd90_oboe, 255, 255, 0, 165 @english horn
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 255, 255, 255, 0 @bassoon
	voice_directsound 60, 0, DirectSoundWaveData_unused_sd90_oboe, 255, 255, 0, 165 @clarinet
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 255, 0, 99 @piccolo
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 255, 0, 99 @flute
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 255, 0, 99 @recorder
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi_low, 255, 255, 0, 99 @pan flute
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi, 255, 255, 0, 99 @blown bottle
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi_low, 255, 255, 0, 99 @shakuhachi
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 255, 0, 99 @whistle
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 255, 0, 99 @ocarina
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 255, 0, 99 @square
	voice_directsound 60, 0, DirectSoundWaveData_saw_synth, 255, 255, 0, 99 @saw
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi_low, 255, 255, 0, 99 @calliope
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 255, 0, 99 @chiff
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 255, 0, 99 @charang
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 255, 0, 99 @voice
	voice_directsound 60, 0, DirectSoundWaveData_unused_guitar_separates_power_chord, 255, 165, 154, 165 @fifths TODO
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @bass + lead TODO
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @new age TODO ALL after this one
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @warmth
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @polysynth
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 255, 0, 99 @choir
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @bowed
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @metallic
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @halo
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @sweep
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @rain
	voice_directsound 60, 0, DirectSoundWaveData_soundtrack, 255, 255, 0, 99 @soundtrack
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @crystal
	voice_directsound 60, 0, DirectSoundWaveData_atmosphere_synth, 255, 255, 0, 99 @atmosphere
	voice_directsound 60, 0, DirectSoundWaveData_brightness_synth, 255, 255, 0, 99 @brightness
	voice_directsound 60, 0, DirectSoundWaveData_goblins, 255, 255, 0, 99 @goblins
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @echoes
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @sci-fi
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99 @pads and stuff
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 255, 0, 99 @shamisen
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 255, 0, 99 @koto
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 255, 0, 99

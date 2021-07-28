package com.wilbert.myapplication;

import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;

import com.wilbert.svrender.SvRenderJni;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        SvRenderJni.Test();
    }
}
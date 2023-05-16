import React from 'react';
import {useState} from 'react';

function UseState(props) {
    const[name,setname]=useState('tops')
    const clckhndle=()=>{
        setname('react class')
    }
    return (
        <>
           <div className="container">
            <div className="row">
                <div className="col">
                    <h1>{name}</h1>
                    <button className='btn btn-primary' onClick={clckhndle}> click</button>
                </div>
            </div>
            </div> 
        </>
    );
}

export default UseState;
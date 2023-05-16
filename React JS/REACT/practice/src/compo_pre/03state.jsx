import React, { Component } from 'react';

class state extends Component {

    constructor(props){
        super(props);
        // this.state={counter:0}
        this.state={name:"jay",movie:"ff9"}
    }

    btnchang=()=>{
        this.setState({name:"satyam"})
    }

    count=()=>{
        this.setState({counter:this.state.counter+1})
    }

    render() {
        return (
           <>
            <div className='container'>
                <div className='row mt-5'>
                    <div className='col'>
                        {/* <h1>{this.state.counter}</h1> */}
                        <button className='btn btn-primary' onClick={this.count}>click</button>
                        <h1>{this.state.name}</h1>
                        <button className='btn btn-success' onClick={this.btnchang}>click me</button>
                        <button className='btn btn-primary' onClick={()=>this.setState({name:'jay'})}>click </button>
                        <h1>{this.state.movie}</h1>
                        <button className='btn btn-primary' onClick={()=>{this.setState({movie:"Fast X"})}}>movie</button>

                    </div>
                </div>
             </div>
           </>
        );
    }
}

export default state;

